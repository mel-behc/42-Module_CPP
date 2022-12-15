#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{

    public:

    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& weaponTyp);
    void attack();

    private:
 
    std::string player;
    Weapon *weapon;

};

#endif