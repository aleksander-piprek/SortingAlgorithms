#include "insertion_sort.hpp"

InsertionSort::InsertionSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Insertion Sort")
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

std::vector<int> InsertionSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
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

std::vector<int> InsertionSort::visualiseSort(std::vector<int>& unsortedVector)
{
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
        
        blockingQueue.push(unsortedVector);        
    }
    
    return unsortedVector;    
}