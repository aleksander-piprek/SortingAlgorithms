#include "cpp_sort.hpp"

CppSort::CppSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "cpp Sort")
{
    switch(applicationMode)
    {
        case TEST:
        {
            std::cout << this->getName() << ": \n";            
            correct = sort(unsortedVector);
            std::cout << std::endl;            
            break;
        }

        case PRINT: 
        {
            std::cout << this->getName() << ": \n";     
            correct = sort(unsortedVector);
            displayVector();
            std::cout << std::endl;            
            break;
        }

        case ANIMATE:
        {
            correct = sort(unsortedVector);
            break;
        }
    }
}

std::vector<int> CppSort::sort(std::vector<int>& unsortedVector)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::sort(unsortedVector.begin(), unsortedVector.end());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";   

    return unsortedVector;
}