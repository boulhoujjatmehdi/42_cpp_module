#include "HumanA.hpp"

HumanA::HumanA(string nme, Weapon &wep): name(nme), weapon(&wep)
{}

void HumanA::attack()
{
    cout << name << " attacks with their "  << weapon->gettype() << endl;
}