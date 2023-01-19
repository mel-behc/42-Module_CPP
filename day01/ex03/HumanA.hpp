#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "header.hpp"

class HumanA
{
    Weapon&     weapon;
    std::string name;
    
    public:
    HumanA(std::string player, Weapon& newWeapon);
    void attack(void);
};

#endif
