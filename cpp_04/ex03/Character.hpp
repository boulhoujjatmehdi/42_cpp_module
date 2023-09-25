#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class Character
{
    string Name;
    AMateria *inventory[4];
    unsigned int       inv_stat;
public:
// ~Character() {}

Character(string name);

std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);
};

#endif