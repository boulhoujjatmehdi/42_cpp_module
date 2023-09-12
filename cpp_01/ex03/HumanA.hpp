#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    string name;
    Weapon *weapon;
    public:
    HumanA(string nme , Weapon &wep);
    void attack();
};

#endif