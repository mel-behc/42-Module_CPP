#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    public:

        Weapon();
        Weapon(std::string weaponName);
        void setType(std::string str);
        const std::string& getType(void);

    private:

        std::string weaponType;
};

#endif