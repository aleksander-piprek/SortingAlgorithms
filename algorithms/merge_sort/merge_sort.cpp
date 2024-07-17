#include "merge_sort.hpp"

Algorithms::MergeSort::MergeSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("MergeSort")
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

std::vector<int> Algorithms::MergeSort::sort(std::vector<int> unsortedVector)
{
    std::cout << "Merge sort: ";
        
    auto start_time = std::chrono::high_resolution_clock::now();

    sortedVector = mergeSort(unsortedVector);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(sortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    return sortedVector;
}

std::vector<int> Algorithms::MergeSort::mergeSort(std::vector<int> unsortedVector)
{
    std::vector<int> leftSide;
    std::vector<int> rightSide;

    return mergeSort(leftSide);
}

std::vector<int> Algorithms::MergeSort::merge()
{
    return std::vector<int>();
}

std::vector<int> Algorithms::MergeSort::stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting)
{

    ++i;

    return unsortedVector;
}

void Algorithms::MergeSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}