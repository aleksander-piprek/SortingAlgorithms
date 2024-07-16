#include "bubble_sort.hpp"

Algorithms::BubbleSort::BubbleSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector)
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
            visualise(unsortedVector);
            break;
        }
    }    
}

std::vector<int> Algorithms::BubbleSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Bubble sort: ";   
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

std::vector<int> Algorithms::BubbleSort::stepSort(std::vector<int> unsortedVector, int i, int j)
{
    for(int j = 0; j < unsortedVector.size() - 1 - i; j++)
    {
        if(unsortedVector[j] > unsortedVector[j+1])
        {
            iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j + 1);     
        }
    }

    return unsortedVector;
}

std::vector<int> Algorithms::BubbleSort::getUnsortedVector()
{
    return unsortedVector_;
}

void Algorithms::BubbleSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}