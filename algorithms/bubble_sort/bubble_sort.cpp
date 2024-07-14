#include "bubble_sort.hpp"

BubbleSort::BubbleSort(Unsorted vector)
{
    std::cout << "Bubble sort: " << std::endl;

    if(display)
        displayVector(vector.randomVector);

    std::cout << "\n\n";
}

void BubbleSort::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
}