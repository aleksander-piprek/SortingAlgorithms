#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "../../commons/random/random.hpp"
#include "../../commons/visualise/visualise.hpp"
#include <queue>

class Algorithm
{
    std::vector<int> unsortedVector;
    std::string name;

    std::queue<std::vector<int>> stateQueue;

    public:
        Algorithm(std::vector<int> unsortedVector, std::string name)
            : unsortedVector(unsortedVector), name(name) {}
        virtual ~Algorithm() = 0;
        virtual std::vector<int> sort(std::vector<int>& unsortedVector) = 0;
        virtual std::vector<int> stepSort(std::vector<int> unsortedVector, int& i,  bool& sorting) = 0;

        std::vector<int> getUnsortedVector();
        void setVector(std::vector<int> vector) { unsortedVector = vector; }
        std::string getName();
        void displayVector();

        std::queue<std::vector<int>> getStateQueue() const { return stateQueue; } 
    
    protected:
            void addState(const std::vector<int>& state);
};

#endif //ALGORITHM_HPP