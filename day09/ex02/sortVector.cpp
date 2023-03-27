#include "PmergeMe.hpp"

static void merge(std::vector<int>& vector, int leftIndice, int midPoint, int rightIndice)
{
    std::vector<int> tmpLeftSubVec;
    std::vector<int> tmpRightSubVec;
    int i;
    int j;
    int k;

    for (i = leftIndice; i <= midPoint; i++)
        tmpLeftSubVec.push_back(vector[i]);

    for (i = (midPoint + 1); i <= rightIndice; i++)
        tmpRightSubVec.push_back(vector[i]);

    i = 0;
    j = 0;
    k = leftIndice;

    int leftSize;
    int rightSize;

    leftSize = tmpLeftSubVec.size();
    rightSize = tmpRightSubVec.size();

    while (i < leftSize && j < rightSize)
    {
        if (tmpLeftSubVec[i] <= tmpRightSubVec[j])
            vector[k++] = tmpLeftSubVec[i++];
        else
            vector[k++] = tmpRightSubVec[j++];
    }

    leftSize = tmpLeftSubVec.size();
    rightSize = tmpRightSubVec.size();

    while (i < leftSize)
        vector[k++] = tmpLeftSubVec[i++];

    while (j < rightSize)
        vector[k++] = tmpRightSubVec[j++];
}

static void insertionSort(std::vector<int>& vetcor, int leftIndice, int rightIndice)
{
    int number;
    int j;

    for (int i = (leftIndice + 1); i <= rightIndice; i++)
    {
        number = vetcor[i];
        j = i -1;
        while (j >= leftIndice && vetcor[j] > number)
        {
            vetcor[j + 1] = vetcor[j];
            j--;
        }
        vetcor[j + 1] = number;
    }
}

void mergeInsertionSortVector(std::vector<int>& vector, int leftIndice, int rightIndice, int k)
{
    int midPoint;

    if ((rightIndice - leftIndice + 1) <= k)
    {
        insertionSort(vector, leftIndice, rightIndice);
        return ;
    }
    midPoint = leftIndice + ((rightIndice - leftIndice) / 2);
    mergeInsertionSortVector(vector, leftIndice, midPoint, k);
    mergeInsertionSortVector(vector, (midPoint + 1), rightIndice, k);
    merge(vector, leftIndice, midPoint, rightIndice);
}