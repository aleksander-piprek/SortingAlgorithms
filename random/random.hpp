#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../commons/common.hpp"

class Random
{
    public:
        Random(int range);

        void createRandomVector(int range);

        int range;
        std::vector<int> unsortedVector;  
};

#endif //UNSORTED_HPP