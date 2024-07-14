#include "commons/sorting_algorithms.hpp"

int main()
{
    // Create random vector in range (1 - range)
    Unsorted vector(5000, isDisplay);

    // Sort() from STL for comparison
    Algorithms::CppSort cppSort(vector.unsortedVector, isDisplay);
    
    // Bubble Sort
    Algorithms::BubbleSort BubbleSort(vector.unsortedVector, isDisplay);

    return 0;
}