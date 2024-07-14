#include "unsorted/unsorted.hpp"
#include "algorithms/cpp_sort/cpp_sort.hpp"
#include "algorithms/bubble_sort/bubble_sort.hpp"

int main()
{
    // Create random vector in range (1 - range)
    Unsorted vector(1000);

    // Run sort() from STL for comparison
    CppSort cppSort(vector);
    
    // Run Bubble Sort
    BubbleSort BubbleSort(vector);
    return 0;
}