#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class Character : public ICharacter
{
    string Name;
    AMateria *inventory[4];
    unsigned int       inv_stat;
public:
//----------------
    ~Character();
    Character(string name);
    Character();
    Character(const Character &obj);
    Character& operator=(const Character& obj);
//-----------------
std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);
};

#endif