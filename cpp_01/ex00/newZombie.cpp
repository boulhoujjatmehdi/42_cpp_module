#include "Zombie.hpp"

Zombie* newZombie( string name )
{
    Zombie *newZ  = new Zombie(name);
    return newZ;
}