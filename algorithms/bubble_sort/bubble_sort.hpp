#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../unsorted/unsorted.hpp"

class BubbleSort
{
    public:
        BubbleSort(std::vector<int> unsortedVector);
        void displayVector(std::vector<int> sortedVector);

        bool display = false;
        bool isSwapped = false;
};

#endif //BUBBLE_SORT_HPP