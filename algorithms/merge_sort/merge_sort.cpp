#include "merge_sort.hpp"

MergeSort::MergeSort(std::vector<int> unsortedVector)
    : Algorithm(unsortedVector, "Merge Sort")
{
    switch(applicationMode)
    {
        case TEST:
        {
            sort(unsortedVector);
            std::cout << std::endl;
            break;
        }

        case PRINT: 
        {
            sort(unsortedVector);
            displayVector();
            std::cout << std::endl;
            break;
        }

        case ANIMATE:
        {
            visualiseSort(unsortedVector);
            Visualiser visualise(this, blockingQueue);
            visualise.run(this);
            break;
        }
    }    
}

std::vector<int> MergeSort::sort(std::vector<int>& unsortedVector)
{
    std::cout << this->getName() << ": "; 
        
    auto start_time = std::chrono::high_resolution_clock::now();

    unsortedVector = mergeSort(unsortedVector);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    
    if(unsortedVector == correct)
        std::cout << "[OK]\n";
    else
        std::cout << "[Error]\n";

    std::cout << "Time: " << time/std::chrono::milliseconds(1) << " ms\n";    

    // setVector(unsortedVector);

    return unsortedVector;
}

std::vector<int> MergeSort::mergeSort(std::vector<int> unsortedVector)
{
    if(unsortedVector.size() <= 1)
        return unsortedVector;

    auto halfPoint = unsortedVector.size() / 2;
    std::vector<int> leftSide(unsortedVector.begin(), unsortedVector.begin() + halfPoint);
    std::vector<int> rightSide(unsortedVector.begin() + halfPoint, unsortedVector.end());

    leftSide = mergeSort(leftSide);
    rightSide = mergeSort(rightSide);

    return merge(leftSide, rightSide);
}

std::vector<int> MergeSort::merge(std::vector<int> leftSide, std::vector<int> rightSide)
{
    int left = 0;
    int right = 0;

    while(1)
    {
        if(leftSide.size() == 0)
            return rightSide;
        else if(rightSide.size() == 0)
            return leftSide;
        
        int leftSideElement = leftSide[left];
        int rightSideElement = rightSide[right];
        
        if(leftSideElement > rightSideElement)
        {
            right++;
            if(leftSideElement < rightSide[right] || right == rightSide.size())
            {
                rightSide.insert(rightSide.begin() + right, leftSide[left]);
                leftSide.erase(leftSide.begin() + left);
            }
        }
        else if(rightSideElement > leftSideElement)
        {
            left++;
            if(rightSideElement < leftSide[left] || left == leftSide.size())
            {
                leftSide.insert(leftSide.begin() + left, rightSide[right]);
                rightSide.erase(rightSide.begin() + right);
            }       
        }
    }
}

std::vector<int> MergeSort::visualiseSort(std::vector<int>& unsortedVector)
{
    // if(unsortedVector.size() <= 1)
    //     return unsortedVector;

    // auto halfPoint = unsortedVector.size() / 2;
    // std::vector<int> leftSide(unsortedVector.begin(), unsortedVector.begin() + halfPoint);
    // std::vector<int> rightSide(unsortedVector.begin() + halfPoint, unsortedVector.end());

    // leftSide = visualiseSort(leftSide);
    // rightSide = visualiseSort(rightSide);
    
    // return visualiseMerge(unsortedVector, leftSide, rightSide, 0, halfPoint);
}

std::vector<int> MergeSort::visualiseMerge(std::vector<int>& array, std::vector<int> leftSide, std::vector<int> rightSide, int leftStart, int rightStart)
{
    // int left = 0, right = 0;
    // int index = leftStart;

    // while (left < leftSide.size() && right < rightSide.size())
    // {
    //     if (leftSide[left] <= rightSide[right])
    //     {
    //         array[index] = leftSide[left];
    //         left++;
    //     }
    //     else
    //     {
    //         array[index] = rightSide[right];
    //         right++;
    //     }
    //     blockingQueue.push(array);
    //     index++;
    // }

    // while (left < leftSide.size())
    // {
    //     array[index] = leftSide[left];
    //     left++;
    //     blockingQueue.push(array);
    //     index++;
    // }

    // while (right < rightSide.size())
    // {
    //     array[index] = rightSide[right];
    //     right++;
    //     blockingQueue.push(array);
    //     index++;
    // }

    // return array;
}