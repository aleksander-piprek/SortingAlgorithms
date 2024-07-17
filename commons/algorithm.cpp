#include "algorithm.hpp"

Algorithms::Algorithm::~Algorithm() = default;

void Algorithms::Algorithm::displayVector(std::vector<int> sortedVector)
{
    for(auto& nums : sortedVector)
        std::cout << nums << " ";
    std::cout << "\n";
}

Visualiser::Visualiser(Algorithms::Algorithm* algorithm)
    :   window(sf::VideoMode(1280, 720), "Sorting Visualizer"), data(algorithm->getUnsortedVector()), algorithmName(algorithm->getName())
{
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
            else if(!sorting)
            {
                event.type == sf::Event::Closed;
                window.close();
            }                
                
        if(sorting)
            data = algorithm->stepSort(data, i, j, sorting);

        draw();
    }
}

void Visualiser::draw()
{
    window.clear(sf::Color::Black);

    sf::Font font;
    if (!font.loadFromFile("../data/ibm-dos-vga-9x16.ttf"))
        std::cout << "Font could not be loaded\n";

    sf::Text text;
    text.setFont(font);
    text.setString(algorithmName);
    text.setCharacterSize(18);
    text.setFillColor(sf::Color::White);    

    for (size_t k = 0; k < data.size(); ++k) 
    {
        sf::RectangleShape bar;
        bar.setSize(sf::Vector2f(barWidth, ((float)data[k]) / vectorSize * height));
        bar.setPosition(k * barWidth, height - bar.getSize().y);
        bar.setFillColor(sf::Color::White);
        window.draw(bar);

   
        window.draw(text);
    }

    window.display();
}