#include "PmergeMe.hpp"

bool inputChecker(std::string& input)
{
    int i;

    i = -1;
    while (input[++i])
    {
        if (isdigit(input[i]) != 1 && input[i] != ' ')
            return (false);
    }
    return (true);
}
