#include "algorithm.hpp"

Algorithms::Algorithm::~Algorithm() = default;

void Algorithms::Algorithm::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}