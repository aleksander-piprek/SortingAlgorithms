# Sorting Algorithms
Repository is dedicated to create a simple framework to test sorting algorithms. To use the early version of the framework:

1. Create **Random** object.
2. Create an algorithm object from any of the implemented sorting algorithms
3. Pass the created vector in Step 1. as a parameter of given sorting algorithm to test it
4. User has to change config having **applicationMode** and **vectorSize** depending on type of application:
- **VectorSize** is the size of the initial vector
-  **TEST** is just going to check if algorithms work correctly and print only time.
- **PRINT** is going to check correctness, print time and sorted vector.
- **ANIMATE** is going to show the sorting algorithm working in real time.
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
| bubble_sort     | ~ 7 ms  | ~ 51 ms | ~ 172 ms  | ~ 644 ms  |
| insertion_sort  | ~ 1 ms  | ~ 10 ms | ~ 39 ms   | ~ 150 ms  |
| selection_sort  | ~ 6 ms  | ~ 36 ms | ~ 144 ms  | ~ 565 ms  |
| cocktail_sort   | ~ 6 ms  | ~ 38 ms | ~ 145 ms  | ~ 581 ms  |
| merge_sort      | ~ 2 ms  | ~ 7 ms  | ~ 15 ms   | ~ 32 ms   |
| quick_sort      | ~ ms  | ~ ms  | ~ ms   | ~ ms   |

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
  - [ ] Quick Sort
  - [ ] Heap Sort
  - [ ] Radix Sort
  - [ ] Intro Sort
  
* Time and memory complexity and usage
* Display more information in GUI