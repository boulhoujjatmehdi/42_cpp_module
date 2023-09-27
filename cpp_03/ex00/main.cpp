#include "ClapTrap.hpp"

int main ()
{
    ClapTrap cl4ptp("mehdi");
	cl4ptp.attack("mehdi");
	cl4ptp.attack("mehdi");
	cl4ptp.attack("mehdi");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(4);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(17);
}