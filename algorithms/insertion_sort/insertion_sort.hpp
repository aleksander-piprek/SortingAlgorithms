#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "../../commons/algorithm/algorithm.hpp"

class InsertionSort : public Algorithm
{
    public:
        InsertionSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int> unsortedVector) override;
        std::vector<int> stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;
};


#endif //INSERTION_SORT_HPP
