#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main()
{	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* toDel[2];
	toDel[0] = tmp = src->createMateria("ice");
	me->equip(tmp);
	toDel[1] = tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete toDel[0];
	delete toDel[1];
	delete bob;
	delete me;
	delete src;
	// system("leaks -q progName");
	return 0;
}