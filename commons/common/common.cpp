#include "common.hpp"
#include <fstream>
#include <sstream>
#include <cmath>
#include <string>

ApplicationMode applicationMode = ANIMATE;
int vectorSize = 1000;
std::vector<int> correct;

unsigned int windowWidth = 1280;
unsigned int windowHeight = 720;

bool loadConfig()
{
    std::ifstream in(configPath);
    if (!in.is_open())
        return false;

    std::string line;
    while (std::getline(in, line))
    {
        std::istringstream iss(line);
        std::string key;
        if (std::getline(iss, key, '='))
        {
            std::string value;
            if (std::getline(iss, value))
            {
                key.erase(key.find_last_not_of(" \n\r\t") + 1);
                value.erase(0, value.find_first_not_of(" \n\r\t"));

                if (key == "ApplicationMode")
                {
                    if (value == "TEST")
                        applicationMode = TEST;
                    else if (value == "PRINT")
                        applicationMode = PRINT;
                    else if (value == "ANIMATE")
                        applicationMode = ANIMATE;
                }
                else if (key == "VectorSize")
                    vectorSize = std::stoi(value);
                else if (key == "WindowWidth")
                    windowWidth = std::stoi(value);
                else if (key == "WindowHeight")
                    windowHeight = std::stoi(value);
            }
        }
    }

    return true;
}

std::map<int, sf::Color> rainbow;

sf::Color hsvToRgb(float hue, float saturation, float value)
{
    float c = value * saturation;
    float x = c * (1 - std::abs(fmod(hue / 60.0, 2) - 1));
    float m = value - c;

    float r, g, b;
    if (hue >= 0 && hue < 60)
        r = c, g = x, b = 0;
    else if (hue >= 60 && hue < 120)
        r = x, g = c, b = 0;
    else if (hue >= 120 && hue < 180)
        r = 0, g = c, b = x;
    else if (hue >= 180 && hue < 240)
        r = 0, g = x, b = c;
    else if (hue >= 240 && hue < 300)
        r = x, g = 0, b = c;
    else
        r = c, g = 0, b = x;

    return sf::Color((r + m) * 255, (g + m) * 255, (b + m) * 255);
}

void createRainbow()
{
    float hueIncrement = 360.0f / vectorSize;
    for (int i = 0; i <= vectorSize; ++i)
    {
        float hue = i * hueIncrement;
        rainbow[i] = hsvToRgb(hue, 1.0f, 1.0f); 
    }
}