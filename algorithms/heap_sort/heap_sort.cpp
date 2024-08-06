#include "heap_sort.hpp"

HeapSort::HeapSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Heap Sort")
{
    switch(applicationMode)
    {
        case TEST:
        {       
            sort(unsortedVector);
            std::cout << std::endl;            
            break;
        }

        case PRINT: 
        {
            sort(unsortedVector);
            displayVector();
            std::cout << std::endl;            
            break;
        }

        case ANIMATE:
        {
            visualiseSort(unsortedVector);
            Visualiser visualise(this, blockingQueue);
            visualise.run(this);
            break;
        }
    }    
}

std::vector<int> HeapSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
    auto start_time = std::chrono::high_resolution_clock::now();

    // Algorithm

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    setVector(unsortedVector);

    return unsortedVector;
}

std::vector<int> HeapSort::visualiseSort(std::vector<int>& unsortedVector)
{
    // Visualising
    return std::vector<int>();
}