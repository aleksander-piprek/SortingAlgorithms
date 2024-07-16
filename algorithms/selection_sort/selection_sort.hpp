#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "../../random/random.hpp"

namespace Algorithms
{
    class SelectionSort
    {
        public:
            SelectionSort(std::vector<int> unsortedVector);
            
            std::vector<int> sort(std::vector<int> unsortedVector);
            void displayVector(std::vector<int> sortedVector);
            bool isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector);
    };
}

#endif //SELECTION_SORT_HPP
