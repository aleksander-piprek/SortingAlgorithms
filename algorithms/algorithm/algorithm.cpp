#include "algorithm.hpp"

Algorithm::~Algorithm() = default;

void Algorithm::displayVector()
{
    for(auto& nums : this->unsortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

std::vector<int> Algorithm::getUnsortedVector()
{
    return this->unsortedVector;
}

std::string Algorithm::getName()
{
    return this->name;
}

void Algorithm::addState(const std::vector<int>& state)
{
    stateQueue.push(state);
}