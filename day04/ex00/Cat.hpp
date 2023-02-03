#ifndef CAT_HPP
#define CAT_HPP

#include "header.hpp"

class Cat : public Animal
{
    private:
        std::string m_type;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        virtual ~Cat();
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif