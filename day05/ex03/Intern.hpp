#ifndef INTERN_HPP
#define INTERN_HPP

#include "header.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        AForm* makeForm(std::string name, std::string target);
};

#endif