#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );


int main()
{
    Zombie *heapZomibie = newZombie("HEAP");
    heapZomibie->announce();
    randomChump("STACK");
    delete heapZomibie;

}