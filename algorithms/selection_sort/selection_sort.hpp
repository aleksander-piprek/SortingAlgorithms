#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "../algorithm/algorithm.hpp"

class SelectionSort : public Algorithm
{
    public:
        SelectionSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        std::vector<int> visualiseSort(std::vector<int>& unsortedVector) override;
};

#endif //SELECTION_SORT_HPP
