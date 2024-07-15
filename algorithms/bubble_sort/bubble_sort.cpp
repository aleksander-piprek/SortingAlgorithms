#include "bubble_sort.hpp"

Algorithms::BubbleSort::BubbleSort(std::vector<int> unsortedVector)
{
    std::cout << "Bubble sort: ";

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

        if(!isSwapped)
            break; 
    }

    if(isCorrect(unsortedVector, correct))
        std::cout << "OK\n";
    else
        std::cout << "Error: Vectors are not the same\n";

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    if(isDisplay)
        displayVector(unsortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void Algorithms::BubbleSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

bool Algorithms::BubbleSort::isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector)
{
    if(sortedVector == correctVector)
        return true;
    else
        return false;
}