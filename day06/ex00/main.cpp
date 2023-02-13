#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    ScalarConverter obj;

    if (ac != 2)
    {
        std::cout << "only 2 args !!\n";
        return (0);
    }
    obj.convert(av[1]);
}