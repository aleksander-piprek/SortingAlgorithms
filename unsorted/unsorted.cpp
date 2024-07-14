#include "unsorted.hpp"

Unsorted::Unsorted(int range, bool displayValues)
    : range(range), isDisplay(displayValues)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    createRandomVector(range);
    
    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    std::cout << "Unsorted numbers in range 1 - " << range << ": " << std::endl;

    if(isDisplay)
        displayVector(unsortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void Unsorted::createRandomVector(int range)
{
    srand((unsigned) time(NULL));
        
    while(true)
    {
        if(unsortedVector.size() == range)
            break;

        int random = 1 + (rand() % range);
        if(std::find(unsortedVector.begin(), unsortedVector.end(), random) == unsortedVector.end())
            unsortedVector.push_back(random);
    }
}

void Unsorted::displayVector(std::vector<int> vector)
{
    for(auto& nums : vector)
        std::cout << nums << " ";
    std::cout << "\n";
}