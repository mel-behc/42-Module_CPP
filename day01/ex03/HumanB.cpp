#include "header.hpp"

HumanB::HumanB(std::string name)
{
    player = name;
    weapon = NULL;
}

void HumanB::setWeapon(Weapon& newWepeon)
{
    weapon = &newWepeon;
}

void HumanB::attack(void)
{
    std::cout << player << " attacks with their " << weapon->getType() <<  '\n';
}