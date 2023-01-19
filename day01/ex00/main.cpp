#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    randomChump("zombi_1");
    z = newZombie("zombie_2");
    z->announce();
    delete z;
    z = NULL;
    return (0);
}