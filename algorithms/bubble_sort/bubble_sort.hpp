#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../commons/algorithm/algorithm.hpp"

class BubbleSort : public Algorithm
{
    bool isSwapped = false;
    
    public:
        BubbleSort(std::vector<int> unsortedVector);

        std::vector<int>    sort(std::vector<int> unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i, bool& sorting) override;
};

#endif //BUBBLE_SORT_HPP