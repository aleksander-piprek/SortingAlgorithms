#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../commons/common.hpp"

class Unsorted
{
    public:
        Unsorted(int range, bool displayValues);
        void displayVector(std::vector<int> vector);

        void createRandomVector(int range);

        int range;
        std::vector<int> unsortedVector;  

        bool isDisplay;
};

#endif //UNSORTED_HPP