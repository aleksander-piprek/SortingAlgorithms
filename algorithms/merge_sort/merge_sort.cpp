#include "merge_sort.hpp"

MergeSort::MergeSort(std::vector<int> unsortedVector)
    : unsortedVector_(unsortedVector), name_ ("Merge Sort")
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

std::vector<int> MergeSort::sort(std::vector<int> unsortedVector)
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

std::vector<int> MergeSort::mergeSort(std::vector<int> unsortedVector)
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

std::vector<int> MergeSort::merge(std::vector<int> leftSide, std::vector<int> rightSide)
{
    if(leftSide[0] < rightSide[0])
        sortedVector.push_back(leftSide[0]);
        sortedVector.push_back(rightSide[0]);

    return sortedVector;
}

std::vector<int> MergeSort::stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting)
{

    ++i;

    return unsortedVector;
}

void MergeSort::visualise(std::vector<int> unsortedVector)
{
    Visualiser visualise(this);
    visualise.run(this);
}