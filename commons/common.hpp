#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <string>
#include <map>
#include <SFML/Graphics.hpp>
#include <cmath>

enum SimulationMode
{
    test,
    print,
    animate
};

extern SimulationMode simulationMode;
extern int vectorSize;
extern std::map<int, sf::Color> rainbow;

const char configPath[] = "../config/debug.cfg";

extern std::vector<int> correct;

bool loadConfig();
void createRainbow();
sf::Color hsvToRgb(float hue, float saturation, float value);

#endif //COMMON_HPP