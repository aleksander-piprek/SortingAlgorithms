#include "selection_sort.hpp"

Algorithms::SelectionSort::SelectionSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("SelectionSort")
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

std::vector<int> Algorithms::SelectionSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Selection sort: ";
        
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

std::vector<int> Algorithms::SelectionSort::stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting)
{
    if(i == vectorSize)
    {
        sorting = false;
        return unsortedVector;
    }    
    
    int min = unsortedVector[i];
    int temp = min;

    for(int j = i; j < unsortedVector.size(); j++)
        if(unsortedVector[j] < min)
            min = unsortedVector[j];

    auto it1 = std::find(unsortedVector.begin(), unsortedVector.end(), temp);
    auto it2 = std::find(unsortedVector.begin(), unsortedVector.end(), min);
    std::iter_swap(it1, it2);  

    ++i;

    return unsortedVector;
}

void Algorithms::SelectionSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}