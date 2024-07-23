#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../../commons/random/random.hpp"
#include "../../commons/visualise/visualise.hpp"

class Algorithm
{
    std::vector<int> unsortedVector;
    std::string name;

    public:
        Algorithm(std::vector<int> unsortedVector, std::string name)
            : unsortedVector(unsortedVector), name(name) {}
        virtual ~Algorithm() = 0;
        virtual std::vector<int> sort(std::vector<int>& unsortedVector) = 0;
        virtual std::vector<int> visualiseSort(std::vector<int>& unsortedVector) = 0;

        std::vector<int> getUnsortedVector();
        void setVector(std::vector<int> vector) { unsortedVector = vector; }
        std::string getName();
        void displayVector();

        BlockingQueue<std::vector<int>> blockingQueue;
};

#endif //ALGORITHM_HPP