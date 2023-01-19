#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie{

    std::string m_name;
    
    public:
    Zombie();
    Zombie(std::string name);
    void announce (void);
};

Zombie*    zombieHorde(int N, std::string name);

# endif