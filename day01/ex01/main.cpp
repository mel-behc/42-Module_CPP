#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(3, "Foo");
    for (int i = 0; i < 3; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}