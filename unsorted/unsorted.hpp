#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../common/common.hpp"
#include <algorithm>

class Unsorted
{
    public:
        Unsorted(int range);
        void createRandomVector(int range);
        
        int range;
        std::vector<int> randomVector;  
};

#endif //UNSORTED_HPP