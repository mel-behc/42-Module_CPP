#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "header.hpp"

class FragTrap : public ClapTrap
{

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& obj);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys(void);

};

#endif