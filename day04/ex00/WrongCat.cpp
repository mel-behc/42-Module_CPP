#include "header.hpp"

WrongCat::WrongCat()
{
}

WrongCat::WrongCat(const WrongCat& obj)
{
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound(void) const
{
    std::cout << "wrong cat sound \n";
}

std::string WrongCat::getType(void) const
{
    return (m_type);
}