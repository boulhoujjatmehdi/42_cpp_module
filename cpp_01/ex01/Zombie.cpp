
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Name = name;
}
Zombie::Zombie(){
}

Zombie::~Zombie()
{
    std::cout << Name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

