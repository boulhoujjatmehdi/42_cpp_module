







#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
public:
    ScavTrap(string name);
    ~ScavTrap();
    void attack(const string &target);
    void guardGate();
};

#endif