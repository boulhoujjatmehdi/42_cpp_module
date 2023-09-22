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
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

public:
    ClapTrap(string name);
    //ORTHODOX
    ClapTrap(ClapTrap &obj);
    ClapTrap();
    ClapTrap& operator=(ClapTrap &obj);
    ~ClapTrap();


    void attack(const string &target);
    void takeDamage(int amount);
    void beRepaired(int amount);
    void setName(string name);
};

#endif