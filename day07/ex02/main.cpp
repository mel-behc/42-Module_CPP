#include "Array.hpp"

int main()
{
    unsigned int size(10);
    Array<int> intNum(size);
    
    for(unsigned int i = 0; i < size; i++)
        intNum[i] = ((i + 1) * 10);

    try 
    {
        for (unsigned int i = 0; i < size; i++)
            std::cout << '[' << intNum[i] << ']' << " ";
        std::cout << '\n';
    }   
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        std::cout << intNum[50] << '\n';
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
}