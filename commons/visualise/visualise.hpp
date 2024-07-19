#ifndef VISUALISE_HPP
#define VISUALISE_HPP

#include "../common/common.hpp"

class Algorithm;

class Visualiser
{
    friend class Algorithm;
    
    public:
        Visualiser(Algorithm* algorithm);
        void run(Algorithm* algorithm);

    private:
        void draw();

        sf::RenderWindow window;
        sf::Font font;
        sf::Text text;

        std::vector<int> data;
        std::string algorithmName;

        float barWidth;
        bool sorting = true;
        int i = 0;
};

#endif //VISUALISE_HPP