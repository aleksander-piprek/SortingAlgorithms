#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class BubbleSort : public Algorithm
    {
        friend class Visualiser;
        public:
            BubbleSort(std::vector<int> unsortedVector);

            std::vector<int> sort(std::vector<int> unsortedVector) override;
            
            std::vector<int> sortedVector;

            bool isSwapped = false;   
    };
}

#endif //BUBBLE_SORT_HPP