#include "Fixed.hpp"

/*              Constructors && Destructors              */
Fixed::Fixed()
{
    fixedPoint = 0;
}

Fixed::Fixed (const Fixed& obj)
{
    *this = obj;
}

Fixed::Fixed (const float floatNum)
{
    fixedPoint = roundf(floatNum * (1 << fractionalBits));
}

Fixed::Fixed (const int intNum)
{
    fixedPoint = intNum << fractionalBits;
}

Fixed::~Fixed()
{
}

/*              Member functions              */

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

/*              Arithmetic Operators              */

Fixed& Fixed::operator=(const Fixed& obj)
{
    this->fixedPoint = obj.getRawBits();
    return (*this);
}

Fixed  Fixed::operator+(const Fixed& obj)
{
    return (this->toFloat() + obj.toFloat());
}

Fixed  Fixed::operator-(const Fixed& obj)
{
    return (this->toFloat() - obj.toFloat());
}

Fixed  Fixed::operator*(const Fixed& obj)
{
    return (this->toFloat() * obj.toFloat());
}

Fixed  Fixed::operator/(const Fixed& obj)
{
    if (obj.toFloat() == 0)
    {
        std::cout << "ERROR !\n";
        exit(0);
    }
    return (this->toFloat() / obj.toFloat());
}

/*              Comparison Operators              */

bool    Fixed::operator==(const Fixed& obj)
{
    return (this->fixedPoint == obj.getRawBits());
}

bool    Fixed::operator!=(const Fixed& obj)
{
    return (!operator==(obj));
}

bool    Fixed::operator<(const Fixed& obj)
{
    return (this->fixedPoint < obj.getRawBits());
}
    
bool    Fixed::operator>(const Fixed& obj)
{
    return (!operator<(obj));
}

bool    Fixed::operator>=(const Fixed& obj)
{
    return (!operator>(obj));
}
    
bool    Fixed::operator<=(const Fixed& obj)
{
    return (!operator<(obj));
}

/*              Static Member Functions              */

const Fixed&     Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.fixedPoint < obj2.fixedPoint)
        return(obj1);
    else
        return(obj2);
}

const Fixed&  Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.fixedPoint > obj2.fixedPoint)
        return (obj1);
    else
        return (obj2);
}

Fixed&  Fixed::min(Fixed& obj1, Fixed& obj2)
{
    if (obj1.fixedPoint < obj2.fixedPoint)
        return (obj1);
    else
        return (obj2);
}

Fixed&  Fixed::max(Fixed& obj1, Fixed& obj2)
{
    if (obj1.fixedPoint > obj2.fixedPoint)
        return (obj1);
    else
        return (obj2);
}

/*              Increment and Decrement Operators              */

Fixed&  Fixed::operator++()
{
    ++fixedPoint;
    return(*this);
}

Fixed&  Fixed::operator--()
{
    --fixedPoint;
    return(*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed tmp(toFloat());

    ++(*this);
    return(tmp);
}
    
Fixed  Fixed::operator--(int)
{
    Fixed tmp(toFloat());

    --(*this);
    return(tmp);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}