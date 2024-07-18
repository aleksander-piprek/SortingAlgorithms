#include "insertion_sort.hpp"

InsertionSort::InsertionSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("Insertion Sort")
{
    switch(simulationMode)
    {
        case TEST:
        {       
            sort(unsortedVector);
            std::cout << std::endl;            
            break;
        }

        case PRINT: 
        {
            displayVector(sort(unsortedVector));
            std::cout << std::endl;            
            break;
        }

        case ANIMATE:
        {
            visualise(unsortedVector);            
            break;
        }
    }    
}

std::vector<int> InsertionSort::sort(std::vector<int> unsortedVector)
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

std::vector<int> InsertionSort::stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting)
{
    for(int j = i - 1; j >= 0; j--)
    {
        if(i == vectorSize)
        {
            sorting = false;
            break;
        }
    
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

    ++i;

    return unsortedVector;
}

void InsertionSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}