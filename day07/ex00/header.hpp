#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>

template <typename Tswap>
void swap (Tswap &x, Tswap &y)
{
    Tswap  z;

    z = x;
    x = y;
    y = z;
}

template <typename Tmin>
Tmin min (Tmin x, Tmin y)
{
    if (x < y)
        return (x);
    return (y);
}

template <typename Tmax>
Tmax max (Tmax x, Tmax y)
{
    if (x > y)
        return (x);
    return (y);
}

#endif