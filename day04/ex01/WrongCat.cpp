#include "header.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called. \n";
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat copy constructor called. \n";
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat copy assignement operator called. \n";
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called. \n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "wrong WrongCat sound \n";
}

std::string WrongCat::getType(void) const
{
    return (m_type);
}