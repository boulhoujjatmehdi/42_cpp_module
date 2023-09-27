#include "Character.hpp"


//---------ORTHODOX-----------
Character::~Character()
{
    for(unsigned int i = 0; i < inv_stat; i++)
    {
        delete inventory[i];
    }
}
//---------ORTHODOX-----------


string const& Character::getName()const
{
    return this->Name;
}

void Character::equip(AMateria* m)
{
    start1:
    if(inv_stat < 4)
    {
        inventory[inv_stat] = m;
        inv_stat++;
    }
    else
    {
        AMateria *tmp =  *inventory; // save the first obj's pointer
        unequip(0);
        delete tmp;//TODO yellow: also i can put it on top of unequip: test this later
        goto start1;
    }
}
// remove the AMateria in the idx
void Character::unequip(int idx)
{
    if(0<= idx && idx < 4)
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