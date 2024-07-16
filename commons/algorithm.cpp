#include "algorithm.hpp"

Algorithms::Algorithm::~Algorithm() = default;

void Algorithms::Algorithm::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

Visualiser::Visualiser(Algorithms::Algorithm* algorithm)
    :   window(sf::VideoMode(1280, 720), "Sorting Visualizer")
{
    // sorting = visualise;
    data = algorithm->getUnsortedVector();
    barWidth = (float)width / (float)vectorSize;
    
}

void Visualiser::run(Algorithms::Algorithm* algorithm)
{
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) 
            if (event.type == sf::Event::Closed)
                window.close();
        
        ++i;
        if(sorting)
            data = algorithm->stepSort(data, i, j);

        draw();
    }
}

void Visualiser::draw()
{
    window.clear(sf::Color::Black);

    for (size_t k = 0; k < data.size(); ++k) 
    {
        sf::RectangleShape bar;
        bar.setSize(sf::Vector2f(barWidth, ((float)data[k]) / vectorSize * height));
        bar.setPosition(k * barWidth, height - bar.getSize().y);
        bar.setFillColor(sf::Color::White);
        window.draw(bar);
    }

    window.display();
}