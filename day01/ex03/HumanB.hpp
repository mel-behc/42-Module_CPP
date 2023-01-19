#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "header.hpp"

class HumanB
{
    std::string player;
    Weapon      *weapon;

    public:
    HumanB(std::string name);
    void setWeapon(Weapon& newWeapon);
    void attack(void);
};

#endif