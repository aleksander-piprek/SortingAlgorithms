#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../algorithm/algorithm.hpp"

class CppSort : public Algorithm
{
    public:
        CppSort(std::vector<int> unsortedVector);

        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        std::vector<int> visualiseSort(std::vector<int>& unsortedVector) override { return std::vector<int>(); }
};

#endif //CPP_SORT_HPP