#include "header.hpp"

Intern::Intern ()
{
}

Intern::Intern(const Intern& obj)
{
    *this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    return (*this);
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    int index(0);
    for (int i(0); i < 3; i++)
    {
        if (forms[i] == name)
        {
            std::cout << "Intern creates " << name <<'\n';
            index = i;
            break;
        }
    }
    switch (index)
    {
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
        {
            std::cout << "No form creation : wrong name !!" << '\n';
            return NULL;
        }
    }
    return NULL;
}