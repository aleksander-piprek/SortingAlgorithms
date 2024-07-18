#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <map>
#include <SFML/Graphics.hpp>

const char configPath[] = "../config/debug.cfg";

enum SimulationMode
{
    TEST,
    PRINT,
    ANIMATE
};

extern SimulationMode simulationMode;
extern int vectorSize;
extern std::vector<int> correct;
extern std::map<int, sf::Color> rainbow;

extern unsigned int windowWidth;
extern unsigned int windowHeight;

bool loadConfig();
void createRainbow();
sf::Color hsvToRgb(float hue, float saturation, float value);

#endif //COMMON_HPP