#include "cpp_sort.hpp"

Algorithms::CppSort::CppSort(std::vector<int> unsortedVector)
{
    switch(simulationMode)
    {
        case test:
        {
            std::cout << "cpp sort(): \n";            
            correct = sort(unsortedVector);
            std::cout << std::endl;            
            break;
        }

        case print: 
        {
            std::cout << "cpp sort(): \n";
            correct = sort(unsortedVector);
            displayVector(correct);
            std::cout << std::endl;            
            break;
        }

        case animate:
        {
            break;
        }
    }
}

std::vector<int> Algorithms::CppSort::sort(std::vector<int> unsortedVector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::sort(unsortedVector.begin(), unsortedVector.end());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";   

    return unsortedVector;
}