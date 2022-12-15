# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:

        Zombie();
        Zombie(std::string Name);
        // ~Zombie();
        void    announce(void);

    private:
    
        std::string _name;
};

Zombie  *zombieHorde( int N, std::string name );

#endif