#include "quick_sort.hpp"

QuickSort::QuickSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Quick Sort")
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

std::vector<int> QuickSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
    
    auto start_time = std::chrono::high_resolution_clock::now();

    quickSort(unsortedVector, 0, unsortedVector.size() - 1);

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

void QuickSort::quickSort(std::vector<int>& unsortedVector, int left, int right)
{
    if(right <= left)
        return;

    int pivot = unsortedVector[left + (right - left) / 2];
    int i = left;
    int j = right;

    while(i <= j)
    {
        while(unsortedVector[i] < pivot)
            ++i;
        
        while(unsortedVector[j] > pivot)
            --j;

        if(i <= j)
        {
            iter_swap(unsortedVector.begin() + i, unsortedVector.begin() + j);            
            ++i;
            --j;
        }
    }
    
    if(j > left)
        quickSort(unsortedVector, left, j);
    if(i < right)
        quickSort(unsortedVector, i, right);
}

std::vector<int> QuickSort::visualiseSort(std::vector<int>& unsortedVector)
{    
    // if(right <= left)
    //     return;

    // int pivot = unsortedVector[left + (right - left) / 2];
    // int i = left;
    // int j = right;

    // while(i <= j)
    // {
    //     while(unsortedVector[i] < pivot)
    //         ++i;
        
    //     while(unsortedVector[j] > pivot)
    //         --j;

    //     if(i <= j)
    //     {
    //         iter_swap(unsortedVector.begin() + i, unsortedVector.begin() + j);            
    //         ++i;
    //         --j;
    //     }
    // }
    
    // if(j > left)
    //     quickSort(unsortedVector, left, j);
    // if(i < right)
    //     quickSort(unsortedVector, i, right);
    // return std::vector<int>();
}