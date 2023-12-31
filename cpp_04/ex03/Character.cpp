#include "Character.hpp"


//---------ORTHODOX-----------
Character::Character()
{
    this->Name = "undifined name";
    inv_stat = 0;
}
Character::~Character()
{
    for(unsigned int i = 0; i < inv_stat; i++)
    {
        delete inventory[i];
    }
}
Character::Character(const Character& obj)
{
    for (int i =0 ; i < 4 ; i++)
        this->inventory[i] = NULL;
    *this = obj;
}

Character& Character::operator=(const Character& obj)
{
    
    this->Name = obj.Name;
    unsigned int tmp_i = inv_stat;
    this->inv_stat = obj.inv_stat;
    for(unsigned int i = 0; i < inv_stat;i++)
    {
        if(i < tmp_i && inventory[i])
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        inventory[i] = obj.inventory[i]->clone();
    }
    return *this; 
}
//---------ORTHODOX-----------

string const& Character::getName()const
{
 
    return this->Name;
}

void Character::equip(AMateria* m)
{
    if(!m)
        return ;
    start1:
    if(inv_stat < 4)
    {

        inventory[inv_stat] = m->clone();
        inv_stat++;
    }
    else
    {
        AMateria *tmp =  *inventory;
        delete tmp;
        unequip(0);
        goto start1;
    }
}

// Remove The AMateria in the idx
void Character::unequip(int idx)
{
    
    if(inv_stat &&0<= idx && idx < 4 )
    {
        for (int i = idx; i < 3; i++)
        {
            inventory[i] = inventory[i+1];
        }
        inv_stat--;
        inventory[inv_stat] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(0<= idx && (unsigned int)idx < inv_stat)
    {
        inventory[idx]->use(target);
        (void)target;
    }    
}

//constructor with name
Character::Character(string name)
{
    this->Name = name;
    this->inv_stat = 0;
}