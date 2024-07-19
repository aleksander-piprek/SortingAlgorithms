#include "algorithm.hpp"

Algorithm::~Algorithm() = default;

void Algorithm::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
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