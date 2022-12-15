#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weaponType)
{
    player = name;
    weapon = weaponType;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << player << " attacks with their " << weapon.getType() << std ::endl;
}