#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../unsorted/unsorted.hpp"

namespace Algorithms
{
    class BubbleSort
    {
        public:
            BubbleSort(std::vector<int> unsortedVector, bool isDisplay);
            void displayVector(std::vector<int> sortedVector);

            bool isDisplay;
            bool isSwapped = false;
    };
}

#endif //BUBBLE_SORT_HPP