#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../../random/random.hpp"
#include "../visualise/visualise.hpp"

class Algorithm
{
    std::vector<int>& unsortedVector;
    std::string& name;

    public:
        Algorithm(std::vector<int> unsortedVector, std::string name)
            : unsortedVector(unsortedVector), name(name) {}
        virtual ~Algorithm() = 0;
        virtual std::vector<int> sort(std::vector<int> unsortedVector) = 0;
        virtual std::vector<int> stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) = 0;

        std::vector<int> getUnsortedVector();
        std::string getName();
        void displayVector(std::vector<int> sortedVector);       
};

#endif //ALGORITHM_HPP