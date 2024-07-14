#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../unsorted/unsorted.hpp"

class BubbleSort
{
    public:
        BubbleSort(Unsorted vector);
        void displayVector(std::vector<int> sortedVector);

        bool display = false;
};

#endif //BUBBLE_SORT_HPP