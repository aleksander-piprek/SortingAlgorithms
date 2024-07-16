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

## Average times for randomly distributed vector of size 10,000:
| Algorithm   	| Average |
|-------------	|------	  |
| std::sort()	| ~ 1 ms  |	
| bubble_sort   | ~ 713 ms |
| insertion_sort| ~ 136 ms|
| selection_sort| ~ ms|

## TODO:
* New algorithms:
  - [x] Bubble Sort
  - [x] Insertion Sort
  - [ ] Selection Sort
  - [ ] Merge Sort
  - [ ] Quick Sort
  - [ ] Heap Sort
* Time and memory complexity and usage,
* GUI to present visually sorting in real time (QT);

## TODO:
* New algorithms,
* Write automated tests to check for average time
* Time and memory complexity and usage,
* GUI to present visually sorting in real time (QT);