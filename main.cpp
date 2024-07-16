#include "commons/common.hpp"
#include "algorithms/bubble_sort/bubble_sort.hpp"
#include "algorithms/cpp_sort/cpp_sort.hpp"
#include "algorithms/insertion_sort/insertion_sort.hpp"
#include "algorithms/selection_sort/selection_sort.hpp"
#include "visualise/sorting_visualiser.hpp"

int main()
{
    // Create random vector in range (1 - range)
    Random vector(vectorSize);

    // // Sort() from STL for comparison
    // Algorithms::CppSort cppSort(vector.unsortedVector);

    // // Bubble Sort
    // Algorithms::BubbleSort BubbleSort(vector.unsortedVector);

    // // Insertion Sort
    // Algorithms::InsertionSort InsertionSort(vector.unsortedVector);
    
    // // Selection Sort
    // Algorithms::SelectionSort SelectionSort(vector.unsortedVector);

    SortingVisualizer visualizer(1280, 720, vectorSize, vector.unsortedVector);
    visualizer.run();

    return 0;
}