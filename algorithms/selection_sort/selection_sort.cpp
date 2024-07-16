#include "selection_sort.hpp"

Algorithms::SelectionSort::SelectionSort(std::vector<int> unsortedVector)
{
    std::cout << "Selection sort: ";

    auto start_time = std::chrono::high_resolution_clock::now();

    std::vector<int> sortedVector = sort(unsortedVector);

    if(isCorrect(sortedVector, correct))
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

std::vector<int> Algorithms::SelectionSort::sort(std::vector<int> unsortedVector)
{

    return unsortedVector;
}

void Algorithms::SelectionSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

bool Algorithms::SelectionSort::isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector)
{
    if(sortedVector == correctVector)
        return true;
    else
        return false;
}