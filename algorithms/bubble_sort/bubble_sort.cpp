#include "bubble_sort.hpp"

BubbleSort::BubbleSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Bubble Sort")
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

std::vector<int> BubbleSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": ";
    auto start_time = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < unsortedVector.size(); i++)
    {
        isSwapped = false;
 
        for(int j = 0; j < unsortedVector.size() - 1 - i; j++)
        {
            if(unsortedVector[j] > unsortedVector[j+1])
            {
                iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j + 1);
                isSwapped = true;
            } 
        }

        if(!isSwapped)
            break; 
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    return unsortedVector;
}

std::vector<int> BubbleSort::visualiseSort(std::vector<int>& unsortedVector)
{
    for(int i = 0; i < unsortedVector.size(); i++)
    {
        isSwapped = false;
 
        for(int j = 0; j < unsortedVector.size() - 1 - i; j++)
        {
            if(unsortedVector[j] > unsortedVector[j+1])
            {
                iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j + 1);
                isSwapped = true;
            } 
        }

        if(!isSwapped)
            break; 

        blockingQueue.push(unsortedVector);        
    }
    
    return unsortedVector;    
}