#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap saad("saad");
	ClapTrap karim("karim");

	saad.attack("karim");
	karim.takeDamage(1);
	karim.takeDamage(3);
	karim.beRepaired(2);
	karim.attack("saad");
	karim.takeDamage(8);
	saad.takeDamage(4);
	saad.clapStatus();
	karim.clapStatus();
	return (0);
}