#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    string name;
    Weapon *weapon;
    public:
    HumanB(string nme);
    void setWeapon(Weapon &wep);
    void attack();
};

#endif