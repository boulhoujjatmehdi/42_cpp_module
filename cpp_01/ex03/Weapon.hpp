#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::endl;

class Weapon
{
    string type;

    public:
    Weapon(string type);
    Weapon();
    ~Weapon();
    string gettype();
    void setType(string tpe);
    

};

#endif
