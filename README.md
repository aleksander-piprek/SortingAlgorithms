# Sorting Algorithms
Repository is dedicated to create a simple framework to test sorting algorithms. To use the early version of the framework:

1. Create **Random** object.
2. Create an algorithm object from any of the implemented sorting algorithms
3. Pass the created vector in Step 1. as a parameter of given sorting algorithm to test it
4. User has to change config having paramaters defined below:
- **VectorSize** is the size of the initial vector to be sorted
- **TEST** if user wants to print time of solving and correctness
- **PRINT** if user wants to print sorted vector, time of solving and correctness
- **ANIMATE** is user wants to see the visualisation of sorting algorithm
- **WindowWidth** is the width of the window in pixels
- **WindowHeight** is the height of the window in pixels

## Theoretical time complexities for algorithms
| Algorithm   	        | Best 	      | Average 	    | Worst 
|-----------------------|-------------|---------------|--------
| Bubble Sort 	        | O(n) 	      | O(n^2)  	    | O(n^2)
| Insertion Sort        | O(n) 	      | O(n^2)  	    | O(n^2)
| Selection Sort        | O(n^2) 	    | O(n^2)  	    | O(n^2)
| Cocktail Shaker Sort  | O(n) 	      | O(n^2)  	    | O(n^2)
| Merge Sort            | O(nlogn) 	  | O(nlogn)  	  | O(nlogn)
| Quick Sort            | O(nlogn) 	  | O(nlogn)  	  | O(n^2)

## Average times for randomly distributed vector of different sizes:
| Algorithm   	  | 1000    | 2500    | 5000      | 10000     |
|-----------------|---------|---------|-----------|-----------|
| cpp_sort	      | ~ 0 ms  |	~ 0 ms  | ~ 0ms     | ~ 1 ms    |
| bubble_sort     | ~ 6 ms  | ~ 41 ms | ~ 174 ms  | ~ 650 ms  |
| insertion_sort  | ~ 1 ms  | ~ 10 ms | ~ 37 ms   | ~ 147 ms  |
| selection_sort  | ~ 5 ms  | ~ 34 ms | ~ 137 ms  | ~ 544 ms  |
| cocktail_sort   | ~ 6 ms  | ~ 38 ms | ~ 158 ms  | ~ 615 ms  |
| merge_sort      | ~ 2 ms  | ~ 7 ms  | ~ 14 ms   | ~ 32 ms   |
| quick_sort      | ~ 0 ms  | ~ 0 ms  | ~ 0 ms    | ~ 1  ms   |

## Dependencies installation
~~~
$ sudo apt-get update
$ sudo apt-get upgrade
$ sudo apt-get install build-essential cmake libsfml-dev
~~~

## Building
~~~
$ git clone https://github.com/aleksander-piprek/SortingAlgorithms.git
$ mkdir build
$ cd build
$ cmake ..
$ make
~~~

## TODO:
* New algorithms:
  - [x] Bubble Sort
  - [x] Insertion Sort
  - [x] Selection Sort
  - [x] Cocktail Shaker Sort
  - [x] Merge Sort
  - [x] Quick Sort
  - [ ] Heap Sort
  - [ ] Radix Sort
  - [ ] Intro Sort
* Memory usage
* Display more information in visualisation