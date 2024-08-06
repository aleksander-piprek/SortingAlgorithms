#ifndef HEAP_SORT_HPP
#define HEAP_SORT_HPP

#include "../algorithm/algorithm.hpp"

class HeapSort : public Algorithm
{
    public:
        HeapSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        std::vector<int> visualiseSort(std::vector<int>& unsortedVector) override;
};


#endif //HEAP_SORT_HPP
