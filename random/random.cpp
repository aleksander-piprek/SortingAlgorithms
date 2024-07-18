#include "random.hpp"
#include <unordered_set>
#include <random>
#include <vector>

Random::Random(int vectorSize)
    : vectorSize_(vectorSize)
{
    switch(simulationMode)
    {
        case TEST:
        {
            std::cout << "Randomly distributed numbers in range 1 - " << vectorSize_ << ": " << std::endl;
            auto start_time = std::chrono::high_resolution_clock::now();

            unsortedVector = createRandomVector(vectorSize_);
            
            auto end_time = std::chrono::high_resolution_clock::now();
            auto time = end_time - start_time;

            std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n\n";

            break;
        }
        case PRINT:
        {
            std::cout << "Randomly distributed numbers in range 1 - " << vectorSize_ << ": "<< std::endl;

            auto start_time = std::chrono::high_resolution_clock::now();

            unsortedVector = createRandomVector(vectorSize_);
            
            auto end_time = std::chrono::high_resolution_clock::now();
            auto time = end_time - start_time;

            std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";

            for(auto& nums : unsortedVector)
                std::cout << nums << " ";

            std::cout << "\n\n";

            break;
        }
        case ANIMATE:
        {
            unsortedVector = createRandomVector(vectorSize_);
        }
    }
}

std::vector<int> Random::createRandomVector(int vectorSize)
{
    std::unordered_set<int> uniqueNumbers;
    unsortedVector.reserve(vectorSize); 

    std::random_device rd;  
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> distrib(1, vectorSize);

    while (uniqueNumbers.size() < vectorSize)
    {
        int random = distrib(gen);
        if (uniqueNumbers.insert(random).second)
            unsortedVector.push_back(random);
    }

    return unsortedVector;
}