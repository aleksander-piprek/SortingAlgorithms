#include "insertion_sort.hpp"

Algorithms::InsertionSort::InsertionSort(std::vector<int> unsortedVector)
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

std::vector<int> Algorithms::InsertionSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Insertion sort: ";     

    auto start_time = std::chrono::high_resolution_clock::now();

    for(int i = 1; i <= unsortedVector.size(); i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            if(unsortedVector[i] < unsortedVector[j])
            {
                if(j == 0)
                {
                    unsortedVector.insert(unsortedVector.begin() + j, unsortedVector[i]);
                    unsortedVector.erase(unsortedVector.begin() + i + 1);
                    break;
                }

                if(unsortedVector[i] > unsortedVector[j-1])
                {
                    unsortedVector.insert(unsortedVector.begin() + j, unsortedVector[i]);
                    unsortedVector.erase(unsortedVector.begin() + i + 1);
                    break;
                }
            }     
        }
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

std::vector<int> Algorithms::InsertionSort::stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting)
{
    for(int j = 0; j < unsortedVector.size() - i; j++)
    {
        if(unsortedVector[j] > unsortedVector[j+1])
        {
            iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j + 1);     
        }
    }

    return unsortedVector;
}

std::vector<int> Algorithms::InsertionSort::getUnsortedVector()
{
    return unsortedVector_;
}

void Algorithms::InsertionSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}