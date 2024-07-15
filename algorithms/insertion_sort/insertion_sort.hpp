#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "../../random/random.hpp"

namespace Algorithms
{
    class InsertionSort
    {
        public:
            InsertionSort(std::vector<int> unsortedVector);
            
            std::vector<int> sort(std::vector<int> unsortedVector);
            void displayVector(std::vector<int> sortedVector);
            bool isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector);
    };
}

#endif //INSERTION_SORT_HPP
