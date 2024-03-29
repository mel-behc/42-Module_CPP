#include "header.hpp"

Animal::Animal() : m_type("an animal")
{
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

Animal::~Animal()
{
}

void Animal::makeSound(void) const
{
    std::cout << "animal sound \n";
}

std::string Animal::getType(void) const
{
    return (m_type);
}