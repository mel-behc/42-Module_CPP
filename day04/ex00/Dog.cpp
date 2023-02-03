#include "header.hpp"

Dog::Dog() : m_type("dog")
{
}

Dog::Dog(const Dog& obj)
{
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

Dog::~Dog()
{
}

void Dog::makeSound(void) const
{
    std::cout << "dog sound \n";
}

std::string Dog::getType(void) const
{
    return (m_type);
}