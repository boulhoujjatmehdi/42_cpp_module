#include "HumanB.hpp"

HumanB::HumanB(string nme)
{
    name = nme;
}

void HumanB::attack()
{
    cout << name << " attacks with their "  << weapon->gettype() << endl;
}

void HumanB::setWeapon(Weapon &wep)
{
    weapon = &wep;
}