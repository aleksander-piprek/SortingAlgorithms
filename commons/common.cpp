#include "common.hpp"
#include <fstream>
#include <sstream>

int vectorSize = 1000;

SimulationMode simulationMode = animate;

std::vector<int> correct;

bool loadConfig()
{
    std::ifstream in(configPath);
    if (!in.is_open())
    {
        return false;
    }

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

                if (key == "SimulationMode")
                {
                    if (value == "test")
                        simulationMode = test;
                    else if (value == "print")
                        simulationMode = print;
                    else if (value == "animate")
                        simulationMode = animate;
                }
                else if (key == "VectorSize")
                {
                    vectorSize = std::stoi(value);
                }
            }
        }
    }

    return true;
}