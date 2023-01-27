#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << '\n';
    fixedPoint = 0;
}

Fixed::Fixed (const Fixed& obj)
{
    std::cout << "Copy constructor called" << '\n';
    *this = obj;
}

Fixed::Fixed (const float floatNum)
{
    std::cout << "float constructor called" << '\n';
    fixedPoint = roundf(floatNum * (1 << fractionalBits));
}

Fixed::Fixed (const int intNum)
{
    std::cout << "int constructor called" << '\n';
    fixedPoint = intNum << fractionalBits;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << '\n';
    if (this == &obj)
        this->fixedPoint = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits(void) const
{
    return (this->fixedPoint);
}
    
void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)fixedPoint / (1 << fractionalBits));
}
    
int Fixed::toInt(void) const
{
    return (fixedPoint >> fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}