#include "header.hpp"

HumanA::HumanA(std::string player, Weapon& newWeapon) : weapon(newWeapon)
{
    name = player;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << '\n';
}