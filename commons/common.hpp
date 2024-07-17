#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <string>

enum SimulationMode
{
    test,
    print,
    animate
};

extern SimulationMode simulationMode;
extern int vectorSize;

const char configPath[] = "../config/debug.cfg";

extern std::vector<int> correct;

bool loadConfig();

#endif //COMMON_HPP