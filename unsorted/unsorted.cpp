#include "unsorted.hpp"

Unsorted::Unsorted(int range)
    : range(range)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    createRandomVector(range);
    
    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    std::cout << "Unsorted numbers in range " << range << ": " << std::endl;

    if(display)
        displayVector(randomVector);

    std::cout << std::endl << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
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

void Unsorted::displayVector(std::vector<int> vector)
{
    for(auto& nums : vector)
        std::cout << nums << " ";
}