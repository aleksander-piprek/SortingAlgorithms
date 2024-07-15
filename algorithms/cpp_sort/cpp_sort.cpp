#include "cpp_sort.hpp"

Algorithms::CppSort::CppSort(std::vector<int> unsortedVector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::sort(unsortedVector.begin(), unsortedVector.end());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    correct = unsortedVector;

    std::cout << "cpp sort(): " << std::endl;

    if(printVector)
        displayVector(unsortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void Algorithms::CppSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}