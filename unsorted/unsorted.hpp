#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Unsorted
{
    public:
        Unsorted(int range);
        void createRandomVector(int range);
        
        int range;
        std::vector<int> randomVector;  
};