#include "visualise.hpp"
#include "../../algorithms/algorithm/algorithm.hpp"

class Algorithm;

Visualiser::Visualiser(Algorithm* algorithm)
    :   window(sf::VideoMode(windowWidth, windowHeight), "Sorting Visualizer"), data(algorithm->getUnsortedVector()), algorithmName(algorithm->getName())
{
    barWidth = (float)windowWidth / (float)vectorSize;

    if (!font.loadFromFile("../data/ibm-dos-vga-9x16.ttf"))
        std::cout << "Font could not be loaded\n";    
    
    text.setFont(font);
    text.setString(algorithmName);
    text.setCharacterSize(18);
    text.setFillColor(sf::Color::White);        
}

void Visualiser::run(Algorithm* algorithm)
{
    while (window.isOpen()) 
    {
        sf::Event event;  
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();      

        if(true)
        {
            if (!algorithm->getStateQueue().empty())
            {
                data = algorithm->getStateQueue().front();
                algorithm->getStateQueue().pop();
            }
            else
            {
                sorting = false;
            }
        }

        // if(sorting)
        //     data = algorithm->stepSort(data, i, sorting);

        draw();
    }
}

void Visualiser::draw()
{
    window.clear(sf::Color::Black);

    for (size_t k = 0; k < data.size(); ++k) 
    {
        sf::RectangleShape bar;
        bar.setSize(sf::Vector2f(barWidth, ((float)data[k]) / vectorSize * windowHeight));
        bar.setPosition(k * barWidth - 1, windowHeight - bar.getSize().y);
        bar.setFillColor(rainbow[data[k]]);
        window.draw(bar);
    }
    
    window.draw(text);

    window.display();
}