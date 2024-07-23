#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include "../algorithm/algorithm.hpp"

class MergeSort : public Algorithm
{
    public:
        MergeSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        void visualiseSort(std::vector<int>& unsortedVector) override;

        std::vector<int> mergeSort(std::vector<int> unsortedVector);
        std::vector<int> merge(std::vector<int> leftSide, std::vector<int> rightSide); 
};


#endif //MERGE_SORT_HPP