#ifndef DOG_HPP
#define DOG_HPP

#include "header.hpp"

class Dog : public Animal
{
    private:
        std::string m_type;
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        virtual ~Dog();
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif