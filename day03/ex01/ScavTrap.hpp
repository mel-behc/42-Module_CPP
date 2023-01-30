#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "header.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate(void);
};

#endif