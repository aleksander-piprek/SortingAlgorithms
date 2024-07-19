#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "../../commons/algorithm/algorithm.hpp"

class SelectionSort : public Algorithm
{
    public:
        SelectionSort(std::vector<int> unsortedVector);
        
        std::vector<int>    sort(std::vector<int> unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;
};

#endif //SELECTION_SORT_HPP
