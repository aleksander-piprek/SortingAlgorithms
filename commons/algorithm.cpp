#include "algorithm.hpp"

Algorithms::Algorithm::~Algorithm() = default;

void Algorithms::Algorithm::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

Visualiser::Visualiser(std::vector<int> unsortedVector)
    :   window(sf::VideoMode(1280, 720), "Sorting Visualizer")
{
    // sorting = visualise;
    data = unsortedVector;
    barWidth = (float)width / (float)vectorSize;
    
}

void Visualiser::run()
{
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) 
            if (event.type == sf::Event::Closed)
                window.close();

        if(sorting)
            stepSort();

        draw();
    }
}

void Visualiser::stepSort()
{
    if (i < data.size() - 1) 
    {
        if (j < data.size() - i - 1) 
        {
            if (data[j] > data[j + 1]) 
            {
                std::swap(data[j], data[j + 1]);
            }
            ++j;
        } 
        else 
        {
            j = 0;
            ++i;
        }
    } 
    else 
    {
        sorting = false;
    }
}

void Visualiser::draw()
{
    window.clear(sf::Color::Black);

    for (size_t k = 0; k < data.size(); ++k) 
    {
        sf::RectangleShape bar;
        bar.setSize(sf::Vector2f(barWidth - 1, ((float)data[k]) / vectorSize * height));
        bar.setPosition(k * barWidth, height - bar.getSize().y);
        bar.setFillColor(sf::Color::White);
        window.draw(bar);
    }

    window.display();
}