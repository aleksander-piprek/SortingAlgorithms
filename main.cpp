#include "unsorted/unsorted.hpp"

int main()
{
    Unsorted vector(10);
    std::sort(vector.randomVector.begin(), vector.randomVector.end());
    std::cout << "Sorted numbers in range " << vector.range << ": " << std::endl;

    for(auto& nums : vector.randomVector)
        std::cout << nums << " ";
    std::cout << std::endl;

    return 0;
}