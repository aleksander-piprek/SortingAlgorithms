#include "insertion_sort.hpp"

Algorithms::InsertionSort::InsertionSort(std::vector<int> unsortedVector)
{
    std::cout << "Insertion sort: ";

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

std::vector<int> Algorithms::InsertionSort::sort(std::vector<int> unsortedVector)
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
    }
    
    return unsortedVector;
}