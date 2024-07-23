#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "../algorithm/algorithm.hpp"

class InsertionSort : public Algorithm
{
    public:
        InsertionSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        void visualiseSort(std::vector<int>& unsortedVector) override;
};


#endif //INSERTION_SORT_HPP
