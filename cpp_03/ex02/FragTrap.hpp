







#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap
{
public:
    FragTrap();
    FragTrap(string name);
    ~FragTrap();
    void highFivesGuys();
};

#endif