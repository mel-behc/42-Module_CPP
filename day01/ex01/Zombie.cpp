#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string Name)
{
    _name = Name;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}