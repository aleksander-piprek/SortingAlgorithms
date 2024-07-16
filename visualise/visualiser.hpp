#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include "../commons/common.hpp"
#include "../commons/algorithm.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Visualiser {
public:
    Visualiser(Algorithms::Algorithm* algorithm);
    void run();
    void stepSort();

private:
    void draw();
    sf::RenderWindow window;
    std::vector<int> data;
    float barWidth;
    bool sorting;
    int i = 0;
    int j = 0;
    const int width = 1280; 
    const int height = 720;
};

#endif // VISUALIZER_HPP