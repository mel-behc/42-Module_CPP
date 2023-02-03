#include "header.hpp"

Dog::Dog() : m_type("dog")
{
    std::cout << "[Dog] default constructor called. \n";
    m_brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
    std::cout << "[Dog] copy constructor called. \n";
    m_brain = NULL;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "[Dog] copy assignement operator called. \n";
    if (this != &obj)
    {
        this->m_type = obj.m_type;
        if (this->m_brain != NULL)
            delete this->m_brain;
        this->m_brain = new Brain(*obj.m_brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "[Dog] destructor called. \n";
    delete m_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "{[dog]} sound \n";
}

std::string Dog::getType(void) const
{
    return (m_type);
}

void Dog::setIdea(std::string idea)
{
    m_brain->setIdea(idea);
}

std::string Dog::getIdea(int index)
{
    return(m_brain->getIdea(index));
}