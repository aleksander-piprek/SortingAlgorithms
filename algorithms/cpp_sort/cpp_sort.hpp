#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../../random/random.hpp"

namespace Algorithms
{
    class CppSort
    {
        public:
            CppSort(std::vector<int> unsortedVector);
            void displayVector(std::vector<int> sortedVector);
    };
}

#endif //CPP_SORT_HPP