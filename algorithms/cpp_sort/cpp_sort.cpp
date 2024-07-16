#include "cpp_sort.hpp"

Algorithms::CppSort::CppSort(std::vector<int> unsortedVector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    correct = sort(unsortedVector);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    std::cout << "cpp sort(): " << std::endl;

    if(printVector)
        displayVector(correct);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

std::vector<int> Algorithms::CppSort::sort(std::vector<int> unsortedVector)
{
    std::sort(unsortedVector.begin(), unsortedVector.end());
    return unsortedVector;
}