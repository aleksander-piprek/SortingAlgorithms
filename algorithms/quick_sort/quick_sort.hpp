#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include "../algorithm/algorithm.hpp"

class QuickSort : public Algorithm
{
    public:
        QuickSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        std::vector<int> visualiseSort(std::vector<int>& unsortedVector) override;
        
        void quickSort(std::vector<int>& unsortedVector, int left, int right);
};

#endif //QUICK_SORT_HPP