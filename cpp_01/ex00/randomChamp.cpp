#include "Zombie.hpp"

void randomChump( string name )
{
    Zombie zomb = Zombie(name);
    zomb.announce();
}
