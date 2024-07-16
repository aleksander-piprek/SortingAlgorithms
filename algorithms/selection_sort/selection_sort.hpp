#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class SelectionSort : public Algorithm
    {
        public:
            SelectionSort(std::vector<int> unsortedVector);
            
            std::vector<int> sort(std::vector<int> unsortedVector);

            std::vector<int> sortedVector;
    };
}

#endif //SELECTION_SORT_HPP
