#include "cpp_sort.hpp"

CppSort::CppSort(Unsorted vector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::sort(vector.randomVector.begin(), vector.randomVector.end());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    std::cout << "cpp sort(): " << std::endl;

    if(display)
        displayVector(vector.randomVector);

    std::cout << std::endl << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void CppSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
}