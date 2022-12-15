#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string weaponName)
{
    weaponType = weaponName;
}

void Weapon::setType(std::string str)
{
    weaponType = str;
}

const std::string& Weapon::getType(void)
{
    return(weaponType);
}