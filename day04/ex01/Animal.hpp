#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "header.hpp"

class Animal
{
    protected:
        std::string m_type;
    public:
        Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        virtual ~Animal();
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif