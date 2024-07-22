#ifndef BLOCKING_QUEUE_HPP
#define BLOCKING_QUEUE_HPP

#include "../common/common.hpp"
#include <queue>
#include <mutex>
#include <thread>

template <typename T>
class BlockingQueue
{
    std::mutex mutex_;
    std::queue<T> queue_;
    public:
        T pop();
        void push(T value);
    
};

#endif //BLOCKING_QUEUE_HPP