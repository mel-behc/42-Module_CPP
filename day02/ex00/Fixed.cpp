#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << '\n';
    fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << '\n';
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << '\n';
    if (this != &obj)
        fixedPoint = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << '\n';
    return (this->fixedPoint);
}
    
void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}