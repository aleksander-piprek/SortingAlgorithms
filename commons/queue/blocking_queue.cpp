#include "blocking_queue.hpp"

T BlockingQueue::pop()
{
    std::lock_quard<std::mutex> lock(this->mutex_);
    T value;
    return value;
}

void BlockingQueue::push(T value)
{
    std::lock_guard<std::mutex> lock(this->mutex_);
}