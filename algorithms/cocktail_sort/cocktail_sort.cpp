#include "cocktail_sort.hpp"

CocktailSort::CocktailSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Cocktail Shaker Sort")
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

std::vector<int> CocktailSort::sort(std::vector<int>& unsortedVector)
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
        
        for(int j = unsortedVector.size() - 1 - i; j > 0; j--)
        {
            if(unsortedVector[j] < unsortedVector[j-1])
            {
                iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j - 1);     
                isSwapped = true;
            }
        }

        blockingQueue.push(unsortedVector);
        
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

void CocktailSort::visualiseSort(std::vector<int>& unsortedVector)
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
        
        for(int j = unsortedVector.size() - 1 - i; j > 0; j--)
        {
            if(unsortedVector[j] < unsortedVector[j-1])
            {
                iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j - 1);     
                isSwapped = true;
            }
        }
            
        if(!isSwapped)
            break; 

        blockingQueue.push(unsortedVector);                    
    }
}