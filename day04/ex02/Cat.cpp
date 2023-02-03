#include "header.hpp"

Cat::Cat() : m_type("cat")
{
    std::cout << "[Cat] default constructor called. \n";
    m_brain = new Brain();
}

Cat::Cat(const Cat& obj)
{
    std::cout << "[Cat] copy constructor called. \n";
    m_brain = NULL;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "[Cat] copy assignement operator called. \n";
    if (this != &obj)
    {
        this->m_type = obj.m_type;
        if (this->m_brain != NULL)
            delete this->m_brain;
        this->m_brain = new Brain(*(obj.m_brain));
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "[Cat] destructor called. \n";
    delete m_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "{[cat]} sound \n";
}

std::string Cat::getType(void) const
{
    return (m_type);
}

void Cat::setIdea(std::string idea)
{
    m_brain->setIdea(idea);
}

std::string Cat::getIdea(int index)
{
    return(m_brain->getIdea(index));
}
