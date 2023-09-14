#include "Zombie.h"

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