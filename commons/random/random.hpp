#ifndef UNSORTED_HPP
#define UNSORTED_HPP

#include "../common/common.hpp"

class Random
{
    int vectorSize_;    
    
    public:
        Random(int vectorSize);
        std::vector<int> createRandomVector(int vectorSize);
        
        std::vector<int> unsortedVector;  
};

#endif //UNSORTED_HPP