
#include "ScavTrap.hpp"

//-----ORTHODOX---------

ScavTrap::ScavTrap()
{
    cout << "Defualt constructor called" << endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap& obj)
{
    this->Name = obj.Name;
    this->AttackDamage = obj.AttackDamage;
    this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    return *this;
}
ScavTrap::ScavTrap(ScavTrap& obj)
{
    *this = obj;
}
ScavTrap::~ScavTrap()
{
    cout << "ScavTrap Dstructor called" << endl;
}
//-----------------------

ScavTrap::ScavTrap(string name)
{
    Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    cout <<"ScavTrap Constructor called" << endl;
}

void ScavTrap::attack(const string &target)
{
    HitPoints--;
    cout<<  "Scavtrap "<< this->Name<< " attacks "<< target <<", causing "<<this->AttackDamage<<" points of damage!" << endl;
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap "<< Name << " is now in Gate Keeper mode" << endl;
}