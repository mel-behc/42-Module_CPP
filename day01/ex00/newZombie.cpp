#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newzombie;

    newzombie = new Zombie(name);
    if (!newzombie)
        newzombie = NULL;
    return (newzombie);
}