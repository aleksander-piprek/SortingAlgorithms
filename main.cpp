#include "commons/sorting_algorithms.hpp"

int main()
{
    // Create random vector in range (1 - range)
    Random vector(5000);

    // Sort() from STL for comparison
    Algorithms::CppSort cppSort(vector.unsortedVector);
    
    // Bubble Sort
    Algorithms::BubbleSort BubbleSort(vector.unsortedVector);

    return 0;
}