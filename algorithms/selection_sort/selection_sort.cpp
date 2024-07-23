#include "selection_sort.hpp"

SelectionSort::SelectionSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Selection Sort")
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

std::vector<int> SelectionSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
        
    auto start_time = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < unsortedVector.size(); i++)
    {
        int min = unsortedVector[i];
        int temp = min;

        for(int j = i; j < unsortedVector.size(); j++)
            if(unsortedVector[j] < min)
                min = unsortedVector[j];

        auto it1 = std::find(unsortedVector.begin(), unsortedVector.end(), temp);
        auto it2 = std::find(unsortedVector.begin(), unsortedVector.end(), min);
        std::iter_swap(it1, it2);    
        blockingQueue.push(unsortedVector);
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

std::vector<int> SelectionSort::visualiseSort(std::vector<int>& unsortedVector)
{
    for(int i = 0; i < unsortedVector.size(); i++)
    {
        int min = unsortedVector[i];
        int temp = min;

        for(int j = i; j < unsortedVector.size(); j++)
            if(unsortedVector[j] < min)
                min = unsortedVector[j];

        auto it1 = std::find(unsortedVector.begin(), unsortedVector.end(), temp);
        auto it2 = std::find(unsortedVector.begin(), unsortedVector.end(), min);
        std::iter_swap(it1, it2);    
        
        blockingQueue.push(unsortedVector);
    }
    
    return unsortedVector;    
}