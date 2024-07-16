#include "sorting_visualiser.hpp"
#include <algorithm>
#include <iostream>

SortingVisualizer::SortingVisualizer(int width, int height, int barCount, std::vector<int> unsortedVector)
    : window(sf::VideoMode(width, height), "Sorting Visualizer"), width_(width), height_(height), sorting(true), i(0), j(0), data(unsortedVector)
{
    barWidth = (float)width / (float)barCount;
}

void SortingVisualizer::run()
{
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) 
            if (event.type == sf::Event::Closed)
                window.close();

        bubbleSortStep();

        draw();
    }
}

void SortingVisualizer::bubbleSortStep()
{
    if (i < data.size() - 1) 
    {
        if (j < data.size() - i - 1) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
            }
            ++j;
        } else {
            j = 0;
            ++i;
        }
    } else {
        sorting = false; // Stop sorting when done
    }
}

void SortingVisualizer::draw()
{
    window.clear(sf::Color::Black);

    for (size_t k = 0; k < data.size(); ++k) 
    {
        sf::RectangleShape bar;
        bar.setSize(sf::Vector2f(barWidth - 1, ((float)data[k]) / vectorSize * height_));
        bar.setPosition(k * barWidth, height_ - bar.getSize().y);
        bar.setFillColor(sf::Color::White);
        window.draw(bar);
    }

    window.display();
}