cmake_minimum_required(VERSION 3.0.0)

project(sorting_algorithms)

add_executable(sorting_algorithms "main.cpp" 
                                  "commons/common.cpp"
                                  "random/random.cpp"
                                  "algorithms/cpp_sort/cpp_sort.cpp"
                                  "algorithms/bubble_sort/bubble_sort.cpp"
                                  "algorithms/insertion_sort/insertion_sort.cpp"
                                  "algorithms/selection_sort/selection_sort.cpp")