#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
    string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

public:
    //TODO: ORTHODODX
    ClapTrap();
    ClapTrap(ClapTrap &obj);
    ClapTrap& operator=(ClapTrap &obj);
    ~ClapTrap();

    
    ClapTrap(string name);
    void attack(const string &target);
    void takeDamage(int amount);
    void beRepaired(int amount);
    
};

#endif