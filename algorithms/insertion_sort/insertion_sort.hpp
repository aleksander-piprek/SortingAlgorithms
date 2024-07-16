#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "../../commons/algorithm.hpp"
#include "../../visualise/visualiser.hpp"

namespace Algorithms
{
    class InsertionSort : public Algorithm
    {
        friend class Visualiser;        
        public:
            InsertionSort(std::vector<int> unsortedVector);
            
            std::vector<int> sort(std::vector<int> unsortedVector) override;
    };
}

#endif //INSERTION_SORT_HPP
