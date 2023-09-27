
#include "FragTrap.hpp"


FragTrap::FragTrap(string name): ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    cout <<"FragTrap Constructor Called" << endl;
}
FragTrap::FragTrap()
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    cout << "FragTrap Default Constructor Called" << endl;
}
FragTrap::~FragTrap()
{
    cout << "FragTrap Dstructor Called" << endl;
}

void FragTrap::highFivesGuys()
{
    cout << "HIGH FIVE GUYS!!!" << endl;
}