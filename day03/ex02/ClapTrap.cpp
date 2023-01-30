#include "header.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called \n";
	m_name = "";
	m_hitPoint = 10;
	m_energyPoint = 10;
	m_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "name ClapTrap initializer constructor called \n";
	m_name = name;
	m_hitPoint = 10;
	m_energyPoint = 10;
	m_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy ClapTrap constructor called \n";
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy ClapTrap assignement operator called \n";
	if (this != &obj)
	{
		this->m_hitPoint = obj.m_hitPoint;
		this->m_energyPoint = obj.m_energyPoint;
		this->m_attackDamage = obj.m_attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Claptrap called \n";
}

void ClapTrap::attack(const std::string& target)
{
	if (m_hitPoint <= 0)
		return;
	else if (m_energyPoint <= 0)
		return;
	m_energyPoint--;
	std::cout << "the ClapTrap " << m_name << " attaks " << target << " , causing " << m_attackDamage << " points of damage!" << '\n';
}

void ClapTrap::takeDamage(unsigned int amount)
{
	m_hitPoint -= amount;
	if (m_hitPoint <= 0)
		m_hitPoint = 0;
	std::cout << m_name << " attacked and lost " << amount << " point of his hit." << '\n';
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoint <= 0)
	{
		m_energyPoint = 0;
		return;
	}
	else
		m_energyPoint--;
	if (m_hitPoint <= 0)
		return;
	else
		m_hitPoint += amount;
	std::cout << m_name << " repair himself using " << amount << " of hit point \n";
}

void ClapTrap::clapStatus(void)
{
	std::cout << "for " << m_name << " :\n";
	std::cout << "hit point " << m_hitPoint << '\n';
	std::cout << "energy point " << m_energyPoint << '\n';
	std::cout << "attack damage " << m_attackDamage << '\n';
}