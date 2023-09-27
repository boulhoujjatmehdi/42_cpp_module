
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
public:
    //ORTHODOX
    ScavTrap();
    ScavTrap(ScavTrap& obj);
    ScavTrap& operator=(ScavTrap& obj);
    ~ScavTrap();
    //ORTHODOX


    ScavTrap(string name);
    void attack(const string &target);
    void guardGate();
};

#endif