#ifndef CPP_SORT_HPP
#define CPP_SORT_HPP

#include "../../commons/algorithm.hpp"

namespace Algorithms
{
    class CppSort : public Algorithm
    {
        std::vector<int> unsortedVector_;        
        std::string name_;

        public:
            CppSort(std::vector<int> unsortedVector);

            std::vector<int>    sort(std::vector<int> unsortedVector) override;
            std::vector<int>    stepSort(std::vector<int> unsortedVector, int& i, int& j, bool& sorting) override;

            std::vector<int>    getUnsortedVector() override {return unsortedVector_;}
            std::string         getName()           override {return name_;}
    };
}

#endif //CPP_SORT_HPP