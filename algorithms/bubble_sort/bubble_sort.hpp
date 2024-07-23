#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../algorithm/algorithm.hpp"

class BubbleSort : public Algorithm
{
    bool isSwapped = false;
    
    public:
        BubbleSort(std::vector<int> unsortedVector);

        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        void visualiseSort(std::vector<int>& unsortedVector) override;
};

#endif //BUBBLE_SORT_HPP