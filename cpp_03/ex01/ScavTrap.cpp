
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name): ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    cout <<"ScavTrap Constructor called" << endl;
}
ScavTrap::~ScavTrap()
{
    cout << "ScavTrap Dstructor called" << endl;
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