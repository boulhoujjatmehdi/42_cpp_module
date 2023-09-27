#include "FragTrap.hpp"

int main ()
{
    
	FragTrap cl4ptp("mehdi");

	// scav.attack(2);


	cl4ptp.attack("Handsome Jack");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(6);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(17);
	cl4ptp.highFivesGuys();
}