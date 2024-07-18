#include "cocktail_sort.hpp"

CocktailSort::CocktailSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("Cocktail Shaker Sort")
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

std::vector<int> CocktailSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Cocktail shaker sort: ";   
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

std::vector<int> CocktailSort::stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting)
{        
    for(int j = 0; j < unsortedVector.size() - 1 - i; j++)
        if(unsortedVector[j] > unsortedVector[j+1])
            iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j + 1);     
    
    for(int j = unsortedVector.size() - 1 - i; j > 0; j--)
        if(unsortedVector[j] < unsortedVector[j-1])
            iter_swap(unsortedVector.begin() + j, unsortedVector.begin() + j - 1);     

    ++i;

    return unsortedVector;
}

void CocktailSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}