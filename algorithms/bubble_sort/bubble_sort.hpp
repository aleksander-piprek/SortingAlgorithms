#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "../../random/random.hpp"

namespace Algorithms
{
    class BubbleSort
    {
        public:
            BubbleSort(std::vector<int> unsortedVector);
            void displayVector(std::vector<int> sortedVector);
            bool isCorrect(std::vector<int> sortedVector, std::vector<int> correctVector);

            bool isSwapped = false;
            bool isDisplay = showNumbers;            
    };
}

#endif //BUBBLE_SORT_HPP