#include "header.hpp"

Cat::Cat() : m_type("cat")
{
}

Cat::Cat(const Cat& obj)
{
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

Cat::~Cat()
{
}

void Cat::makeSound(void) const
{
    std::cout << "cat sound \n";
}

std::string Cat::getType(void) const
{
    return (m_type);
}