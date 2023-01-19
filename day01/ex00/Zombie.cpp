#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    m_name = name;
}

Zombie::~Zombie()
{
    std::cout << m_name << " is killed" << '\n';
}

void Zombie::announce(void)
{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}