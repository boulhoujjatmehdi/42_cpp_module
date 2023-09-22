#include "ClapTrap.hpp"

//constructors
ClapTrap::ClapTrap(string name):HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    this->Name = name;
    cout << "ClapTrap Name constructor called"<< endl;
}

//ORTHODOX
ClapTrap::ClapTrap(ClapTrap& obj)
{
    *this = obj;
}
ClapTrap::ClapTrap()
{
    this->Name = "";
}
ClapTrap::~ClapTrap()
{
    cout << "ClapTrap Destructor called" << endl;
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


void ClapTrap::attack(const string &target)
{
    HitPoints--;
    cout<<  "ClapTrap "<< this->Name<< " attacks "<< target <<", causing "<<this->AttackDamage<<" points of damage!" << endl;
}

void ClapTrap::takeDamage(int amount)
{
    this->HitPoints-= amount;
    if(HitPoints < 0)
        cout<< "ClapTrap "<< Name << " got no hit points left" << endl;
    else
        cout<<  "ClapTrap "<< this->Name<< " takes "<< amount <<" point of damage , he got only "<< HitPoints<<" hit points left."<< endl;
}

void ClapTrap::beRepaired(int amount)
{
    if((EnergyPoints - amount) < 0)
    {
        
        cout << "ClapTrap "<< Name<< " don't have that amount of energy points to repaire." << endl;
    }
    else if(HitPoints + amount > 100)
    {
        cout <<"ClapTrap "<<Name<< "you cant heal more than the max" << endl;
    }
    else
    {
        this->EnergyPoints-= amount;
        this->HitPoints+= amount;
        cout<< "ClapTrap "<< this->Name << " repaired for "<< amount <<" energy points, he now got "<<HitPoints<<" hit points."<< endl; 
    }
}