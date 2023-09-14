#include "Zombie.h"

Zombie* newZombie( string name )
{
    Zombie *newZ  = new Zombie(name);
    return newZ;
}