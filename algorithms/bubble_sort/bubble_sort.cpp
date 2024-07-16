#include "bubble_sort.hpp"

Algorithms::BubbleSort::BubbleSort(std::vector<int> unsortedVector)
{
    std::cout << "Bubble sort: ";

    auto start_time = std::chrono::high_resolution_clock::now();

    std::vector<int> sortedVector = sort(unsortedVector);

    if(sortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    if(printVector)
        displayVector(sortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

std::vector<int> Algorithms::BubbleSort::sort(std::vector<int> unsortedVector)
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

        if(!isSwapped)
            break; 
    }

    return unsortedVector;
}