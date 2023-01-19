#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie{

    std::string m_name;
    
    public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce (void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

# endif