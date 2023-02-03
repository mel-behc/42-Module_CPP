#include "header.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called. \n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy constructor called. \n";
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy assignement operator called. \n";
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called. \n";
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "wrong animal sound \n";
}

std::string WrongAnimal::getType(void) const
{
    return (m_type);
}