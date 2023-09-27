#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name):HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    this->Name = name;
    cout << "Name constructor called"<< endl;
}
//----------------ORTHODOX----------------

ClapTrap::ClapTrap():HitPoints(10), EnergyPoints(10), AttackDamage(0){}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    cout << "Copy constructor called"<< endl;
    *this = obj;
}
ClapTrap& ClapTrap::operator=(ClapTrap& obj)
{
    cout << "Copy assignement operator called"<< endl;
    this->Name = obj.Name;
    this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return *this;
}
ClapTrap::~ClapTrap()
{
    cout << "Destructor called" << endl;
}
//----------------ORTHODO----------------

void ClapTrap::attack(const string &target)
{
    if(!HitPoints)
        cout << "ClapTrap "<< Name<< " have no HitPoints to attack!"<< endl;
    else if(!EnergyPoints)
        cout << "ClapTrap "<< Name<< " have no EnergyPoints to attack!"<< endl;
    else
    {
        EnergyPoints--;
        cout<<  "ClapTrap "<< Name<< " attacks "<< target <<", causing 0 points of damage!" << endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints = HitPoints > amount ? HitPoints-amount: 0 ;
    if(!HitPoints)
        cout<< "ClapTrap "<< Name << " got no hit points left" << endl;
    else
        cout<<  "ClapTrap "<< Name<< " takes "<< amount <<" point of damage , he got only "<< HitPoints<<" hit points left."<< endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!EnergyPoints)
        cout << "ClapTrap "<< Name << " have no EnergyPoints to be repaired!"<< endl;
    else
    {
        this->EnergyPoints--;
        this->HitPoints+= amount;
        cout<< "ClapTrap "<< this->Name << " repaired for "<< amount <<" energy points, he now got "<<HitPoints<<" hit points."<< endl; 
    }
}
