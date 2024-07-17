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
            std::vector<int> stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) override;
            std::vector<int> getUnsortedVector() override;

            std::vector<int> unsortedVector_;
    };
}

#endif //CPP_SORT_HPP