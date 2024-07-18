#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include "../../commons/algorithm.hpp"

class MergeSort : public Algorithm
{
    std::vector<int> unsortedVector_;        
    std::string name_;

    public:
        MergeSort(std::vector<int> unsortedVector);
        
        std::vector<int>    sort(std::vector<int> unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;

        std::vector<int>    getUnsortedVector() override {return unsortedVector_;}
        std::string         getName()           override {return name_;}

        void visualise(std::vector<int> unsortedVector);

        std::vector<int> mergeSort(std::vector<int> unsortedVector);
        std::vector<int> merge(std::vector<int> leftSide, std::vector<int> rightSide);

        std::vector<int> sortedVector;      
};


#endif //MERGE_SORT_HPP