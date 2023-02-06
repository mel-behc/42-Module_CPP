#include "header.hpp"

WrongAnimal::WrongAnimal()
{
    m_type = "kind of animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "wrong animal sound \n";
}

std::string WrongAnimal::getType(void) const
{
    return (m_type);
}