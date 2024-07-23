#ifndef BLOCKING_QUEUE_HPP
#define BLOCKING_QUEUE_HPP

#include <queue>
#include <mutex>
#include <thread>
#include <condition_variable>

template <typename T>
class BlockingQueue
{
    mutable std::mutex mutex_;
    std::queue<T> queue_;
    std::condition_variable signal_;
    public:
        void push(T& _data);     
        bool empty() const;            
        bool tryPop(T& _value);
        void waitAndPop(T& _value);
        bool tryWaitAndPop(T& _value, int _time);
};

template<class T>
void BlockingQueue<T>::push(T& _data)
{
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(_data);
}

template<class T>
bool BlockingQueue<T>::empty() const
{
    std::lock_guard<std::mutex> lock(mutex_);
    return queue_.empty();
}

template<class T>
bool BlockingQueue<T>::tryPop(T& _value)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if(queue_.empty())
        return false;

    _value = queue_.front();
    queue_.pop();
    return true;
}

template<class T>
void BlockingQueue<T>::waitAndPop(T& _value)
{
    std::unique_lock<std::mutex> lock(mutex_);
    while (queue_.empty())
    {
        signal_.wait(lock);
    }

    _value = queue_.front();
    queue_.pop();
}

template<class T>
bool BlockingQueue<T>::tryWaitAndPop(T& _value, int _time)
{
    std::unique_lock<std::mutex> lock(mutex_);
    while (queue_.empty())
    {
        signal_.wait_for(lock, std::chrono::milliseconds(_time));
        return false;
    }

    _value = queue_.front();
    queue_.pop();
    return true;
}

#endif //BLOCKING_QUEUE_HPP