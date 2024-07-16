#include "random.hpp"

Random::Random(int range)
    : range(range)
{
    switch(simulationMode)
    {
        case test:
        {
            std::cout << "Randomly distributed numbers in range 1 - " << range << ": " << std::endl;
            auto start_time = std::chrono::high_resolution_clock::now();

            createRandomVector(range);
            
            auto end_time = std::chrono::high_resolution_clock::now();
            auto time = end_time - start_time;

            std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n\n";

            break;
        }
        case print:
        {
            std::cout << "Randomly distributed numbers in range 1 - " << range << ": "<< std::endl;

            auto start_time = std::chrono::high_resolution_clock::now();

            createRandomVector(range);
            
            auto end_time = std::chrono::high_resolution_clock::now();
            auto time = end_time - start_time;

            std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";

            for(auto& nums : unsortedVector)
                std::cout << nums << " ";

            std::cout << "\n\n";

            break;
        }
        case animate:
        {
            createRandomVector(range);
        }
    }
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