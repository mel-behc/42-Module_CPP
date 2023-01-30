#include "header.hpp"

int main(void)
{
	ClapTrap saad("saad");
	ScavTrap karim("karim");
	FragTrap sakazo("sakazo");

	saad.attack("karim");
	karim.attack("saad");
	sakazo.attack("karim");
	karim.guardGate();
	saad.clapStatus();
	karim.clapStatus();
	sakazo.clapStatus();
	sakazo.highFivesGuys();
	sakazo.attack("karim");

	return (0);
}