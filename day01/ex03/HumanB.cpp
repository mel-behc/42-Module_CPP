#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    player = name;
    weapon = new Weapon();
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weaponTyp)
{
    weapon = &weaponTyp;
}

void HumanB::attack()
{
    std::cout << player << " attacks with their " << weapon->getType() << std::endl;
}