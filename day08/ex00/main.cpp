#include "easyfind.hpp"

int main(void)
{
    try 
    {
        std::vector<int> intVector;

        for (int i(0); i < 100; i++)
            intVector.push_back(i * 100);
        std::cout << "value = " << *easyfind(intVector, 1200) << '\n';
        std::cout << "value = " << *easyfind(intVector, 20) << '\n';
        std::cout << "value = " << *easyfind(intVector, 500) << '\n';
    }
    catch (std::exception &excep)
    {
        std::cout << excep.what() << '\n';
    }
    return (0);
}