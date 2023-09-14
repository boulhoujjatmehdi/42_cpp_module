#include "Zombie.h"

Zombie::Zombie(string name)
{
    Name = name;
}

Zombie::Zombie()
{
    
}
Zombie::~Zombie()
{
    cout << Name << " destroyed"<< endl;
}

void Zombie::announce(void)
{
    cout << Name << " BraiiiiiiinnnzzzZ..."<< endl;
}