#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class SelectionSort : public Algorithm
    {
        std::vector<int> unsortedVector_;        
        std::string name_;

        public:
            SelectionSort(std::vector<int> unsortedVector);
            
            std::vector<int> sort(std::vector<int> unsortedVector);
            std::vector<int> stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) override;

            std::vector<int> getUnsortedVector() override {return unsortedVector_;}
            std::string getName() override {return name_;}

            void visualise(std::vector<int> unsortedVector);

            std::vector<int> sortedVector;
    };
}

#endif //SELECTION_SORT_HPP
