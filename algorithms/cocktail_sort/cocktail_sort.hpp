#ifndef COCKTAIL_SORT_HPP
#define COCKTAIL_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class CocktailSort : public Algorithm
    {
        friend class Visualiser;
        public:
            CocktailSort(std::vector<int> unsortedVector);

            std::vector<int> sort(std::vector<int> unsortedVector) override;
            std::vector<int> stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) override;
            std::vector<int> getUnsortedVector() override;

            void visualise(std::vector<int> unsortedVector);

            std::vector<int> unsortedVector_;
            std::vector<int> sortedVector;

            bool isSwapped = false;
    };
}

#endif //COCKTAIL_SORT_HPP