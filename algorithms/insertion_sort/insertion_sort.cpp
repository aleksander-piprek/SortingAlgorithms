#include "insertion_sort.hpp"

Algorithms::InsertionSort::InsertionSort(std::vector<int> unsortedVector)
{
    std::cout << "Insertion sort: ";

    auto start_time = std::chrono::high_resolution_clock::now();

    std::vector<int> sortedVector = sort(unsortedVector);

    if(isCorrect(unsortedVector, correct))
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    if(printVector)
        displayVector(unsortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

std::vector<int> Algorithms::InsertionSort::sort(std::vector<int> unsortedVector)
{

    return unsortedVector;
}

void Algorithms::InsertionSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

bool Algorithms::InsertionSort::isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector)
{
    if(sortedVector == correctVector)
        return true;
    else
        return false;
}