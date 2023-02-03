#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "header.hpp"

class WrongAnimal
{
    private:
        std::string m_type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        ~WrongAnimal();
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif