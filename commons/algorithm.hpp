#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../random/random.hpp"

namespace Algorithms
{
    class Algorithm
    {
        public:
            virtual ~Algorithm() = 0;
            virtual std::vector<int> sort(std::vector<int> unsortedVector) = 0;
            void displayVector(std::vector<int> sortedVector);       
    };
}

#endif //ALGORITHM_HPP