#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<int> vector;
    std::list<int> list;
    std::string input;
    int number;

    if (ac < 2)
    {
        std::cout << "Error: bad arguments \n";
        return (0);
    }
    for (int i = 1; i < ac; ++i)
    {
        input = av[i];
        if (!inputChecker(input))
        {
            std::cout << "Error: bad arguments \n";
            return (0);
        }
        else
        {
            std::stringstream value(input);
            value >> number;
            vector.push_back(number);
            list.push_back(number);
        }
    }
    pmergMe(vector, list, ac);    
    return (0);
}

