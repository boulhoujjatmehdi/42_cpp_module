
#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieList =  new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        name[5] = '0' + i;
        zombieList[i] = Zombie(name);
    }
    return zombieList;
}

int main ()
{
    Zombie *zombies = zombieHorde(10, "mehdi ");

    for (int i = 0; i < 10; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
}