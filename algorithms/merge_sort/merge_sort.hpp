#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include "../algorithm/algorithm.hpp"
#include <map>

class MergeSort : public Algorithm
{
    public:
        MergeSort(std::vector<int> unsortedVector);
        
        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        std::vector<int> visualiseSort(std::vector<int>& unsortedVector) override;

        std::vector<int> mergeSort(std::vector<int> unsortedVector);
        std::vector<int> merge(std::vector<int> leftSide, std::vector<int> rightSide); 

        std::vector<int> visualiseMerge(std::vector<int>& array, std::vector<int> leftSide, std::vector<int> rightSide, int leftStart, int rightStart);
};

#endif //MERGE_SORT_HPP