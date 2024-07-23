#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <map>
#include <SFML/Graphics.hpp>
#include "../queue/blocking_queue.hpp"

const char configPath[] = "../config/default.cfg";

enum ApplicationMode
{
    TEST,
    PRINT,
    ANIMATE
};

extern ApplicationMode applicationMode;
extern int vectorSize;
extern std::vector<int> correct;
extern std::map<int, sf::Color> rainbow;

extern unsigned int windowWidth;
extern unsigned int windowHeight;

bool loadConfig();
bool createRainbow();
sf::Color hsvToRgb(float hue, float saturation, float value);
bool init();

#endif //COMMON_HPP