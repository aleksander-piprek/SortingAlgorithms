#include "commons/common.hpp"
#include "algorithms/bubble_sort/bubble_sort.hpp"
#include "algorithms/cpp_sort/cpp_sort.hpp"
#include "algorithms/insertion_sort/insertion_sort.hpp"
#include "algorithms/selection_sort/selection_sort.hpp"
#include "algorithms/cocktail_sort/cocktail_sort.hpp"
#include "algorithms/merge_sort/merge_sort.hpp"
#include "algorithms/quick_sort/quick_sort.hpp"

int main()
{
    if(!loadConfig())
    {
        std::cout << "Error in loading config\n";
        return 1;
    }

    createRainbow();

    // Create random vector in range (1 - range)
    Random vector(vectorSize);

    // Sort() from STL for comparison
    CppSort cppSort(vector.unsortedVector);

    // Bubble Sort
    BubbleSort BubbleSort(vector.unsortedVector);

    // Insertion Sort
    InsertionSort InsertionSort(vector.unsortedVector);
    
    // Selection Sort
    SelectionSort SelectionSort(vector.unsortedVector);
    
    // Cocktail Sort
    CocktailSort CocktailSort(vector.unsortedVector);

    // Merge Sort
    MergeSort MergeSort(vector.unsortedVector);

    // Quick Sort
    QuickSort QuickSort(vector.unsortedVector);    
    return 0;
}