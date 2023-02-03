#include "header.hpp"

Brain::Brain()
{
    std::cout << "[Brain] default constructor called. \n";
}

Brain::Brain(const Brain& obj)
{
    std::cout << "[Brain] copy constructor called. \n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "[Brain] copy assignement operator called. \n";
    if (this != &obj)
    {
        for(int i(0); i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return(*this);
}

Brain::~Brain()
{
    std::cout << "[Brain] destructor called. \n";
}

void Brain::setIdea(std::string idea)
{
    for (int i(0); i < 100 ; i++)
    {
        if (ideas[i].length() == 0)
        {
            ideas[i] = idea;
            return ;
        }
    }
}

std::string Brain::getIdea(int index)
{
    if (index < 0 || index > 99)
        return ("no idea");
    for (int i(0); i < 100; i++)
    {
        if (i == index && ideas[i].length() == 0)
            return ("no idea");
        else if (i == index)
            break;
    }
    return (ideas[index]);
}