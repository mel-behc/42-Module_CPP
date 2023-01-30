#include "header.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor \n";
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "Copy ScavTrap constructor called \n";
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "Copy ScavTrap assignement operator called \n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called. \n";
	m_name = name;
	m_hitPoint = 100;
	m_energyPoint = 50;
	m_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called. \n";
}

void ScavTrap::attack(const std::string& target)
{
	if (m_hitPoint <= 0)
		return;
	else if (m_energyPoint <= 0)
		return;
	m_energyPoint--;
	std::cout << "the ScavTrap " << m_name << " attaks " << target << " , causing " << m_attackDamage << " points of damage!" << '\n';
}

void ScavTrap::guardGate(void)
{
	std::cout << m_name << " is now in Gate Keeper mode. \n";
}