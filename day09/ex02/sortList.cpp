#include "PmergeMe.hpp"

static void merge(std::list<int>& tmpLeftSubList, std::list<int>& tmpRightSubList, std::list<int>& list)
{
    while (!tmpLeftSubList.empty() && !tmpRightSubList.empty())
    {
        if (tmpLeftSubList.front() <= tmpRightSubList.front())
        {
            list.push_back(tmpLeftSubList.front());
            tmpLeftSubList.pop_front();
        }
        else
        {
            list.push_back(tmpRightSubList.front());
            tmpRightSubList.pop_front();
        }
    }

    while (!tmpLeftSubList.empty())
    {
        list.push_back(tmpLeftSubList.front());
        tmpLeftSubList.pop_front();
    }

    while (!tmpRightSubList.empty())
    {
        list.push_back(tmpRightSubList.front());
        tmpRightSubList.pop_front();
    }
}

static void insertionSort(std::list<int>& list)
{
    std::list<int>::iterator it;
    std::list<int>::iterator jt;
    int number;

    for(it = next(list.begin()); it != list.end(); ++it)
    {
        number = *it;
        jt = prev(it);
        while (jt != list.begin() && *jt > number)
        {
            *next(jt) = *jt;
            --jt;
        }
        if (*jt > number)
        {
            *next(jt) = *jt;
            *jt = number;
        }
        else
            *next(jt) = number;
    }
}

void mergeInsertionSortList(std::list<int>& list)
{
    std::list<int> tmpLeftSubList;
    std::list<int> tmpRightSubList;
    std::list<int>::iterator it;
    int midPoint;

    if (list.size() <= 1)
        return ;
    if (list.size() <= 10)
    {
        insertionSort(list);
        return ;
    }
    
    midPoint = list.size() / 2;
    it = list.begin();
    
    for(int i = 0; i < midPoint; ++i)
    {
        tmpLeftSubList.push_back(*it);
        ++it;
    }

    for(size_t i = midPoint; i < list.size(); ++i)
    {
        tmpRightSubList.push_back(*it);
        ++it;
    }

    mergeInsertionSortList(tmpLeftSubList);
    mergeInsertionSortList(tmpRightSubList);

    list.clear();
    merge(tmpLeftSubList, tmpRightSubList, list);

}