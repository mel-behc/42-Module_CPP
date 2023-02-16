#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

template <typename T, typename U>
typename T::iterator easyfind(T container, U value)
{
    typename T::iterator iter;
    
    iter = std::find(container.begin(), container.end(), value);
    if (iter != container.end())
        return (iter);
    else
        throw std::invalid_argument("no value found in the container");
}

#endif