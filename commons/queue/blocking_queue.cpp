#include "blocking_queue.hpp"

template<class T>
void BlockingQueue<T>::push(T& data)
{
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(data);
}

template<class T>
bool BlockingQueue<T>::empty() const
{
    std::lock_guard<std::mutex> lock(mutex_);
    return queue_.empty();
}

template<class T>
bool BlockingQueue<T>::tryPop(T& value)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if(queue_.empty())
        return false;

    value = queue_.front();
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