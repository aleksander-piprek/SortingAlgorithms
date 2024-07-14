#include "cpp_sort.hpp"

CppSort::CppSort(std::vector<int> unsortedVector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::sort(unsortedVector.begin(), unsortedVector.end());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    std::cout << "cpp sort(): " << std::endl;

    if(display)
        displayVector(unsortedVector);

    std::cout << std::endl << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void CppSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
}