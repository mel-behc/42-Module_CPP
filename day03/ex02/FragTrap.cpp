#include "header.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called \n";
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "Copy FragTrap constructor called \n";
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "Copy FragTrap assignement operator called \n";
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called ! \n";
	m_name = name;
	m_hitPoint = 100;
	m_energyPoint = 100;
	m_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destrucotr called ! \n";
}

void FragTrap::attack(const std::string& target)
{
	if (m_hitPoint <= 0)
		return;
	else if (m_energyPoint <= 0)
		return;
	m_energyPoint--;
	std::cout << "the FragTrap " << m_name << " attaks " << target << " , causing " << m_attackDamage << " points of damage!" << '\n';
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "form high five guys functions !! \n";
}