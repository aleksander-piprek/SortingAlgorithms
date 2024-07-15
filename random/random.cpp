#include "random.hpp"

Random::Random(int range)
    : range(range)
{
    auto start_time = std::chrono::high_resolution_clock::now();

    createRandomVector(range);
    
    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    std::cout << "Randomly distributed numbers in range 1 - " << range << ": " << std::endl;

    if(printVector)
        displayVector(unsortedVector);

    std::cout << time/std::chrono::milliseconds(1) << " ms\n";

    std::cout << "\n\n";
}

void Random::createRandomVector(int range)
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

void Random::displayVector(std::vector<int> vector)
{
    for(auto& nums : vector)
        std::cout << nums << " ";
    std::cout << "\n";
}