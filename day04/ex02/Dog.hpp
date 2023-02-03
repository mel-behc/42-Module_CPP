#ifndef DOG_HPP
#define DOG_HPP

#include "header.hpp"

class Dog : public Animal
{
    private:
        std::string m_type;
        Brain       *m_brain;
    public:
        Dog();
        Dog(const Dog& obj);
        Dog&        operator=(const Dog& obj);
        virtual     ~Dog();
        virtual     void makeSound(void) const;
        virtual     std::string getType(void) const;
        void        setIdea(std::string idea);
        std::string getIdea(int index);
};

#endif