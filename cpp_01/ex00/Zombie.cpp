#include "Zombie.hpp"

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