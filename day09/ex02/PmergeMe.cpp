#include "PmergeMe.hpp"

void pmergMe(std::vector<int>& vector, std::list<int>& list, int nargs)
{
    clock_t startVector;
    clock_t endVector;
    clock_t startList;
    clock_t endList;
    double timeVec;
    double timeList;

    std::cout << "befor: ";
    for (size_t i = 0; i < vector.size(); i++)
        std::cout << vector[i] << ' ';

    // std::list<int>::iterator it;
    // for(it = list.begin(); it != list.end(); ++it)
    //     std::cout << *it << ' ';
    
    std::cout << '\n';

    int k = 3;
    startVector = clock();
    mergeInsertionSortVector(vector, 0, (vector.size() - 1), k);
    endVector  = clock();
    timeVec = (double)(endVector - startVector) / (CLOCKS_PER_SEC / 1000000);


    startList = clock();
    mergeInsertionSortList(list);
    endList = clock();
    timeList = (double)(endList - startList) / (CLOCKS_PER_SEC / 1000000);


    std::cout << "after: ";
    for (size_t i = 0; i < vector.size(); i++)
        std::cout << vector[i] << ' ';

    // std::list<int>::iterator it;
    // for(it = list.begin(); it != list.end(); ++it)
    //     std::cout << *it << ' ';

    std::cout << '\n';


    std::cout << "Time to process a range of " << nargs - 1  << " elements with std::vector : " << std::fixed << std::setprecision(3) << timeVec  << " us" << '\n';
    std::cout << "Time to process a range of " << nargs - 1  << " elements with std::list : " << std::fixed << std::setprecision(3) << timeList << " us"<< '\n';
}