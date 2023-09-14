#include "Zombie.hpp"

Zombie* newZombie( string name )
{
    Zombie *newZ  = new Zombie(name);
    return newZ;
}

void randomChump( string name )
{
    Zombie zomb = Zombie(name);
    zomb.announce();
}

int main()
{
    Zombie *zombies  =  new Zombie[10];
    for (int i = 0;i < 10 ; i++)
    {
        string str = "mehdi-";
        str[5] = '0'+i;
        zombies[i] = Zombie(str);
        zombies[i].announce();
    }
    randomChump("mehdi_stack");
    delete[] zombies;

}