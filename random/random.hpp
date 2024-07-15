#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../commons/common.hpp"

class Random
{
    public:
        Random(int range);
        void displayVector(std::vector<int> vector);

        void createRandomVector(int range);

        int range;
        std::vector<int> unsortedVector;  

        bool isDisplay = showNumbers;
};

#endif //UNSORTED_HPP