#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "header.hpp"

class Weapon
{
    std::string type;

    public:
    Weapon();
    Weapon(std::string newType);
    const std::string& getType(void);
    void setType(std::string newType);
};

#endif