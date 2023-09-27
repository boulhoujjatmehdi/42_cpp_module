#include "MateriaSource.hpp"

void  MateriaSource::learnMateria(AMateria* obj)
{
    if(stash_count < 4)
    {
        stash[stash_count] = obj;
        cout << "MateriaSource: new materia added to ."<< endl;
    }
    else
        cout << "MateriaSource: stash is full."<< endl;
}

AMateria* MateriaSource::createMateria(string const &type)
{
    for (int i = 0; i < stash_count;i++)
    {
        if(stash[i]->getType() == type)
            return stash[i];
    }
    return 0;
}