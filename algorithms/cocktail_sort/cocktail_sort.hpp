#ifndef COCKTAIL_SORT_HPP
#define COCKTAIL_SORT_HPP

#include "../algorithm/algorithm.hpp"

class CocktailSort : public Algorithm
{
    bool isSwapped = false;
    
    public:
        CocktailSort(std::vector<int> unsortedVector);

        std::vector<int> sort(std::vector<int>& unsortedVector) override;
        void visualiseSort(std::vector<int>& unsortedVector) override;
};

#endif //COCKTAIL_SORT_HPP