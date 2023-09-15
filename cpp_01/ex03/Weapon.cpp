#include "Weapon.hpp"

string Weapon::gettype()
{
    return type;
}

void Weapon::setType(string tpe)
{
    type = tpe;
}

Weapon::Weapon(string type):type(type)
{
    return ;
};

Weapon::Weapon(){};
Weapon::~Weapon(){};