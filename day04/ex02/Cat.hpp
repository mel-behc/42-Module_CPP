#ifndef CAT_HPP
#define CAT_HPP

#include "header.hpp"

class Cat : public Animal
{
    private:
        std::string m_type;
        Brain       *m_brain;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat&         operator=(const Cat& obj);
        virtual     ~Cat();
        virtual     void makeSound(void) const;
        virtual     std::string getType(void) const;
        void        setIdea(std::string idea);
        std::string getIdea(int index);
};

#endif