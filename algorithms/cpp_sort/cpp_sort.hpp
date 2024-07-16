#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class CppSort : public Algorithm
    {
        public:
            CppSort(std::vector<int> unsortedVector);

            std::vector<int> sort(std::vector<int> unsortedVector) override;
    };
}

#endif //CPP_SORT_HPP