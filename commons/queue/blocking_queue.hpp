#ifndef BLOCKING_QUEUE_HPP
#define BLOCKING_QUEUE_HPP

#include "../common/common.hpp"
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
        void push(T& data);     
        bool empty() const;            
        bool tryPop(T& value);
        void waitAndPop(T& _value);
        bool tryWaitAndPop(T& _value, int _time);
};

#endif //BLOCKING_QUEUE_HPP