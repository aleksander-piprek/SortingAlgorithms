#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../../unsorted/unsorted.hpp"
#include <algorithm>

class CppSort
{
    public:
        CppSort(Unsorted vector);
        void displayVector(std::vector<int> sortedVector);

        bool display = false;
};

#endif //CPP_SORT_HPP