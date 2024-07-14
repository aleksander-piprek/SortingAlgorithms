#include "bubble_sort.hpp"

BubbleSort::BubbleSort(std::vector<int> unsortedVector)
{
    std::cout << "Bubble sort: " << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < unsortedVector.size(); i++)
    {
        isSwapped = false;
 
        for(int j = 0; j < unsortedVector.size() - 1; j++)
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

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    if(display)
        displayVector(unsortedVector);

    std::cout << std::endl << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void BubbleSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
}