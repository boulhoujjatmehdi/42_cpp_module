#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
protected:
    string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    //TODO: ORTHODODX
    ClapTrap();
    ClapTrap(ClapTrap &obj);
    ClapTrap& operator=(ClapTrap &obj);
    ~ClapTrap();

    
    ClapTrap(string name);
    void attack(const string &target);
    void takeDamage(unsigned int  amount);
    void beRepaired(unsigned int amount);
    
};

#endif