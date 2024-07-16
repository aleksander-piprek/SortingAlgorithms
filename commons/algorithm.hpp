#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../random/random.hpp"
#include <SFML/Graphics.hpp>

namespace Algorithms
{
    class Algorithm
    {
        public:
            virtual ~Algorithm() = 0;
            virtual std::vector<int> sort(std::vector<int> unsortedVector) = 0;
            void displayVector(std::vector<int> sortedVector);       
    };
}

class Visualiser {
public:
    Visualiser(std::vector<int> unsortedVector);
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
    int width = 1280; 
    int height = 720;
};

#endif //ALGORITHM_HPP