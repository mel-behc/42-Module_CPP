#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "header.hpp"

class Brain
{
    private:
        std::string     ideas[100];

    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        ~Brain();
        std::string getIdea(int index);
        void setIdea(std::string idea);
};

#endif