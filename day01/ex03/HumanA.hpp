#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{

    public:

    HumanA(std::string name, Weapon weaponType);
    void attack(void);
    ~HumanA();

    private:
    
    std::string player;
    Weapon weapon;
};


#endif