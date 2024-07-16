#ifndef SORTINGVISUALIZER_HPP
#define SORTINGVISUALIZER_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "../commons/common.hpp"

class SortingVisualizer {
public:
    SortingVisualizer(int width, int height, int barCount, std::vector<int> unsortedVector);
    void run();
    void bubbleSortStep();

private:
    void draw();
    sf::RenderWindow window;
    std::vector<int> data;
    float barWidth;
    bool sorting;
    int i, j;
    int width_, height_;
};

#endif // SORTINGVISUALIZER_HPP