#include "cpp_sort.hpp"

CppSort::CppSort(Unsorted vector)
{
    std::sort(vector.randomVector.begin(), vector.randomVector.end());
    std::cout << "cpp sort(): " << std::endl;

    for(auto& nums : vector.randomVector)
        std::cout << nums << " ";

    std::cout << "\n\n";
}