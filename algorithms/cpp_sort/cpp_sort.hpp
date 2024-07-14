#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../../unsorted/unsorted.hpp"

namespace Algorithms
{
    class CppSort
    {
        public:
            CppSort(std::vector<int> unsortedVector, bool displayValues);
            void displayVector(std::vector<int> sortedVector);

            bool isDisplay;
    };
}

#endif //CPP_SORT_HPP