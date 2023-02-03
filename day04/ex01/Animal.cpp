#include "header.hpp"

Animal::Animal() : m_type("an animal")
{
    std::cout << "Animal default constructor called. \n";
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called. \n";
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignement operator called. \n";
    if (this != &obj)
        this->m_type = obj.m_type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called. \n";
}

void Animal::makeSound(void) const
{
    std::cout << "animal sound \n";
}

std::string Animal::getType(void) const
{
    return (m_type);
}