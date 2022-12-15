#include "Zombie.hpp"

// Zombie::Zombie()
// {
// }

Zombie::Zombie(std::string Name)
{
    _name = Name;
}

Zombie::~Zombie()
{
    std::cout << "The <<" << _name << ">> Zombie killed" << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}