#include "ScavTrap.hpp"

int main ()
{
    
	ScavTrap cl4ptp("MEHDI");
	ScavTrap cpy;
	cpy = cl4ptp;


	cl4ptp.attack("Handsome Jack");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(6);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(120);
	cl4ptp.guardGate();
}