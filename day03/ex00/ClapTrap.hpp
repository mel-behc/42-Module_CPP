#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

	std::string m_name;
	int m_hitPoint;
	int	m_energyPoint;
	int m_attackDamage;

	public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void clapStatus(void);
};

#endif