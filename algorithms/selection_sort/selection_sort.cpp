#include "selection_sort.hpp"

Algorithms::SelectionSort::SelectionSort(std::vector<int> unsortedVector)
{
    switch(simulationMode)
    {
        case test:
        {
            sortedVector = sort(unsortedVector);
            std::cout << std::endl;            
            break;
        }

        case print: 
        {
            sortedVector = sort(unsortedVector);
            displayVector(sortedVector);
            std::cout << std::endl;            
            break;
        }

        case animate:
        {
            break;
        }
    }    
}

std::vector<int> Algorithms::SelectionSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Selection sort: ";
        
    auto start_time = std::chrono::high_resolution_clock::now();

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    return unsortedVector;
}