#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../commons/algorithm.hpp"

class BubbleSort : public Algorithm
{
    std::vector<int> unsortedVector_;        
    std::string name_;

    bool isSwapped = false;
    
    public:
        BubbleSort(std::vector<int> unsortedVector);

        std::vector<int>    sort(std::vector<int> unsortedVector) override;
        std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) override;

        std::vector<int>    getUnsortedVector() override {return unsortedVector_;}
        std::string         getName()           override {return name_;}

        void visualise(std::vector<int> unsortedVector);
};

#endif //BUBBLE_SORT_HPP