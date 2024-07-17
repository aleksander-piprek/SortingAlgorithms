#include "merge_sort.hpp"

Algorithms::MergeSort::MergeSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("Merge Sort")
{
    switch(simulationMode)
    {
        case test:
        {
            sort(unsortedVector);
            std::cout << std::endl;
            break;
        }

        case print: 
        {
            displayVector(sort(unsortedVector));
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

    mergeSort(unsortedVector);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    return unsortedVector;
}

std::vector<int> Algorithms::MergeSort::mergeSort(std::vector<int> unsortedVector)
{
    if(unsortedVector.size() <= 1)
        return unsortedVector;

    auto halfPoint = unsortedVector.size() / 2;
    std::vector<int> leftSide(unsortedVector.begin(), unsortedVector.begin() + halfPoint);
    std::vector<int> rightSide(unsortedVector.begin() + halfPoint, unsortedVector.end());

    mergeSort(leftSide);
    mergeSort(rightSide);
    
    return merge(leftSide, rightSide);
}

std::vector<int> Algorithms::MergeSort::merge(std::vector<int> leftSide, std::vector<int> rightSide)
{
    if(leftSide[0] < rightSide[0])
        sortedVector.push_back(leftSide[0]);
        sortedVector.push_back(rightSide[0]);

    return sortedVector;
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