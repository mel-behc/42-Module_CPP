#include "RPN.hpp"

int main(int ac, char **av)
{
    std::string input;

    if (ac != 2)
    {
        std::cout << "Error: incorrect arguments !\n";
        return (0);
    }
    else
    {
        input = av[1];
        if (!inputChecker(input))
            std::cout << "Error: bad input \n";

    }
    printResult(input);
    return (0);

}