#include "Character.hpp"


string const& Character::getName()const
{
    return this->Name;
}

void Character::equip(AMateria* m)
{
    start:
    if(inv_stat < 3)
    {
        inventory[inv_stat] = m;
        inv_stat++;
    }
    else
    {
        unequip(0);
        goto start;
        //TODO: REMOVE THE FIRST AND SHIFT THE OTHERS, -SO SECOND BECOMES THE FIRST
    }
}
// remove the AMateria in the idx
void Character::unequip(int idx)
{
    if(0< idx < 4)
    {
        for (int i = idx; i < 3; i++)
        {
            inventory[i] = inventory[i+1];
        }
        inv_stat--;
    }
}

void Character::use(int idx, ICharacter& target)
{ 
    inventory[idx]->use(target);
}

//constructor with name
Character::Character(string name)
{
    this->Name = name;
}