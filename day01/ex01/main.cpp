#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    z = zombieHorde(3, "zombie");
    for (int i = 0; i < 3; i++)
        z[i].announce();
    delete [] z;
    z = NULL;
    return (0);
}