#include "iter.hpp"

int main(void)
{
    char charArray[] = {'H', 'E', 'L', 'L', 'O'};
    int IntArray[] = {0, 1, 2, 3};

    iter(charArray, 5, function);
    std::cout << "---------------------------\n";
    iter(IntArray, 4, function);

    return (0);
}