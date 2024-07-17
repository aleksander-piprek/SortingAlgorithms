# Sorting Algorithms
Repository is dedicated to create a simple framework to test sorting algorithms. To use the early version of the framework:

1. Create **Random** object with range passed as a parameter to create a randomly distributed vector
2. Create an algorithm object from any of the implemented sorting algorithms
3. Pass the created vector in Step 1. as a parameter of given sorting algorithm to test it

## Theoretical time complexities for algorithms
| Algorithm   	| Best 	| Average 	| Worst 
|-------------	|------	|---------	|--------
| Bubble Sort 	| O(n) 	| O(n^2)  	| O(n^2)
| Insertion Sort| O(n) 	| O(n^2)  	| O(n^2)
| Selection Sort| O(n^2) 	| O(n^2)  	| O(n^2)
| Cocktail Shaker Sort | O(n) 	| O(n^2)  	| O(n^2)

## Average times for randomly distributed vector of different sizes:
| Algorithm   	  | 1000    | 2500    | 5000      | 10000     |
|-------------	  |------	  |------   |------     |--------   |
| std::sort()	    | ~ 0 ms  |	~ 0 ms  | ~ 0ms     | ~ 1 ms    |
| bubble_sort     | ~ 7 ms  | ~ 51 ms | ~ 172 ms  | ~ 644 ms  |
| insertion_sort  | ~ 1 ms  | ~ 10 ms | ~ 39 ms   | ~ 150 ms  |
| selection_sort  | ~ 6 ms  | ~ 36 ms | ~ 144 ms  | ~ 565 ms  |
| cocktail_shaker | ~ 6 ms  | ~ 38 ms | ~ 145 ms  | ~ 581 ms  |

## TODO:
* New algorithms:
  - [x] Bubble Sort
  - [x] Insertion Sort
  - [x] Selection Sort
  - [x] Cocktail Shaker Sort
  - [ ] Merge Sort
  - [ ] Quick Sort
  - [ ] Heap Sort
  - [ ] Radix Sort
  - [ ] Intro Sort
  
* Time and memory complexity and usage
* Display more information in GUI
* Rainbow colors of visualisation
* Add config to the framework