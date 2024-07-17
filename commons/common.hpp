#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

enum SimulationMode
{
    test,
    print,
    animate
};

extern SimulationMode simulationMode;

extern int vectorSize;

extern std::vector<int> correct;

bool loadConfig();

#endif //COMMON_HPP