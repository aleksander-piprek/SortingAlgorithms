#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../common/common.hpp"
#include <algorithm>

class Unsorted
{
    public:
        Unsorted(int range);
        void createRandomVector(int range);
        void displayVector(std::vector<int> vector);

        int range;
        std::vector<int> unsortedVector;  

        bool display = false;
};

#endif //UNSORTED_HPP