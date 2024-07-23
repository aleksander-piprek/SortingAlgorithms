#ifndef VISUALISE_HPP
#define VISUALISE_HPP

#include "../common/common.hpp"

class Algorithm;

class Visualiser
{
    friend class Algorithm;
    
    public:
        Visualiser(Algorithm* algorithm, BlockingQueue<std::vector<int>>& queue);
        void run(Algorithm* algorithm);

    private:
        void draw();

        sf::RenderWindow window;
        sf::Font font;
        sf::Text text;
        float barWidth;

        std::vector<int> data;
        std::string algorithmName;

        BlockingQueue<std::vector<int>>& blockingQueue;
};

#endif //VISUALISE_HPP