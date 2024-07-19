#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../../random/random.hpp"
#include "../visualise/visualise.hpp"

class Algorithm
{
    public:
        virtual ~Algorithm() = 0;
        virtual std::vector<int> sort(std::vector<int> unsortedVector) = 0;
        virtual std::vector<int> stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) = 0;
        virtual std::vector<int> getUnsortedVector() = 0;
        virtual std::string getName() = 0;

        void displayVector(std::vector<int> sortedVector);       
};

#endif //ALGORITHM_HPP