#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include "../../commons/algorithm/algorithm.hpp"

class QuickSort : public Algorithm
{
    std::vector<int> unsortedVector_;        
    std::string name_;

    public:
        QuickSort(std::vector<int> unsortedVector);
        
        std::vector<int>    sort(std::vector<int> unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;

        std::vector<int>    getUnsortedVector() override {return unsortedVector_;}
        std::string         getName()           override {return name_;}

        std::vector<int> quickSort(std::vector<int> unsortedVector);
        std::vector<int> partition(std::vector<int> unsortedVector);

        std::vector<int> sortedVector;      
};


#endif //QUICK_SORT_HPP