#ifndef COCKTAIL_SORT_HPP
#define COCKTAIL_SORT_HPP

#include "../../commons/algorithm/algorithm.hpp"

class CocktailSort : public Algorithm
{
    bool isSwapped = false;
    
    public:
        CocktailSort(std::vector<int> unsortedVector);

        std::vector<int> sort(std::vector<int> unsortedVector) override;
        std::vector<int> stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) override;
};

#endif //COCKTAIL_SORT_HPP