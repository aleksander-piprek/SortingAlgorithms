#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include "../algorithm/algorithm.hpp"

class QuickSort : public Algorithm
{
    public:
        QuickSort(std::vector<int> unsortedVector);
        
        std::vector<int>    sort(std::vector<int>& unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;
        
        std::vector<int> quickSort(std::vector<int> unsortedVector);
        std::vector<int> partition(std::vector<int> unsortedVector); 
};

#endif //QUICK_SORT_HPP