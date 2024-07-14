#include "unsorted.hpp"

Unsorted::Unsorted(int range)
    : range(range)
{
    createRandomVector(range);
    std::cout << "Unsorted numbers in range " << range << ": " << std::endl;
    for(auto& nums : randomVector)
        std::cout << nums << " ";
    std::cout << std::endl;
}

void Unsorted::createRandomVector(int range)
{
    srand((unsigned) time(NULL));
        
    while(true)
    {
        if(randomVector.size() == range)
            break;

        int random = 1 + (rand() % range);
        if(std::find(randomVector.begin(), randomVector.end(), random) == randomVector.end())
            randomVector.push_back(random);
    }
}