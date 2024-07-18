#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../random/random.hpp"
#include <SFML/Graphics.hpp>

class Algorithm
{
    public:
        virtual ~Algorithm() = 0;
        virtual std::vector<int> sort(std::vector<int> unsortedVector) = 0;
        virtual std::vector<int> stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) = 0;

        virtual std::vector<int> getUnsortedVector() = 0;
        virtual std::string getName() = 0;

        void displayVector(std::vector<int> sortedVector);       
};

class Visualiser
{
    public:
        Visualiser(Algorithm* algorithm);
        void run(Algorithm* algorithm);

    private:
        void draw();

        sf::RenderWindow window;
        sf::Text text;

        std::vector<int> data;
        std::string algorithmName;

        float barWidth;
        bool sorting = true;
        int i = 0;
        int j = 0;
};

#endif //ALGORITHM_HPP