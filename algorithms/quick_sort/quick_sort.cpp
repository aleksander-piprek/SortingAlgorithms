#include "quick_sort.hpp"

QuickSort::QuickSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Quick Sort")
{
    switch(applicationMode)
    {
        case TEST:
        {
            setVector(sort(unsortedVector));
            std::cout << std::endl;
            break;
        }

        case PRINT: 
        {
            setVector(sort(unsortedVector));
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

std::vector<int> QuickSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
    
    auto start_time = std::chrono::high_resolution_clock::now();

    unsortedVector = quickSort(unsortedVector);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    return unsortedVector;
}

std::vector<int> QuickSort::quickSort(std::vector<int> unsortedVector)
{
    // if(unsortedVector.size() <= 1)
        return unsortedVector;

    // int pivot = unsortedVector[unsortedVector.size()-1];

    // int left;
    // int right;

    // std::vector<int> leftOfPivot;
    // std::vector<int> rightOfPivot;

    // partition(leftOfPivot);
    // partition(rightOfPivot);

    // return quickSort();
}

std::vector<int> QuickSort::partition(std::vector<int> unsortedVector)
{
    return unsortedVector;
}

void QuickSort::visualiseSort(std::vector<int>& unsortedVector)
{
}