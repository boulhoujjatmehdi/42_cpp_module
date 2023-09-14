#include "Zombie.h"


void randomChump( string name )
{
    Zombie zomb = Zombie(name);
    zomb.announce();
}
