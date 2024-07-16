cmake_minimum_required(VERSION 3.0.0)

project(sorting_algorithms)

if (WIN32)
    set(CMAKE_PREFIX_PATH "D:\\Software Engineering\\SFML-2.6.1\\lib\\cmake\\SFML")
endif (WIN32)

find_package(SFML 2.5 COMPONENTS graphics audio system REQUIRED)

add_executable(sorting_algorithms "main.cpp" 
                                  "commons/common.cpp"
                                  "commons/algorithm.cpp"
                                  "random/random.cpp"
                                  "algorithms/cpp_sort/cpp_sort.cpp"
                                  "algorithms/bubble_sort/bubble_sort.cpp"
                                  "algorithms/insertion_sort/insertion_sort.cpp"
                                  "algorithms/selection_sort/selection_sort.cpp"
                                  "visualise/visualiser.cpp")

target_link_libraries(sorting_algorithms sfml-graphics sfml-audio sfml-system)