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
    Fixed (const Fixed& obj);
    Fixed(const int intNum);
    Fixed(const float floatNum);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const; 
    int     toInt(void) const;

    static const Fixed&     min(const Fixed& obj1, const Fixed& obj2);
    static const Fixed&     max(const Fixed& obj1, const Fixed& obj2);
    static Fixed&           min(Fixed& obj1, Fixed& obj2);
    static Fixed&           max(Fixed& obj1, Fixed& obj2);


    Fixed&  operator=(const Fixed& obj);
    Fixed   operator+(const Fixed& obj);
    Fixed   operator-(const Fixed& obj);
    Fixed   operator*(const Fixed& obj);
    Fixed   operator/(const Fixed& obj);

    bool    operator==(const Fixed& obj);
    bool    operator>=(const Fixed& obj);
    bool    operator<=(const Fixed& obj);
    bool    operator<(const Fixed& obj);
    bool    operator>(const Fixed& obj);
    bool    operator!=(const Fixed& obj);

    Fixed&  operator++();
    Fixed&  operator--();
    Fixed  operator++(int);
    Fixed  operator--(int);

};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif 