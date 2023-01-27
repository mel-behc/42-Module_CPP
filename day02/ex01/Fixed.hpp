#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    int                 fixedPoint;
    static const int    fractionalBits = 8;
    
    public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed(const int intNum);
    Fixed(const float floatNum);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const; 
    int     toInt(void) const;
    Fixed&  operator=(const Fixed& obj);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif 