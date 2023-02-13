#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T_iter>
void function(T_iter var)
{
   std::cout << "Value of var is :: " << var << '\n';
}

template <typename T_iter>
void iter(T_iter *array, int lengh, void (&function)(T_iter &a))
{
    int i = 0;
    while (i < lengh)
    {
        function(array[i]);
        i++;
    }
}

#endif