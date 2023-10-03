#include "MateriaSource.hpp"
//----------ORTHODOX------------


MateriaSource::MateriaSource()
{
    this->stash[0] = NULL;
    this->stash_count = 0;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < this->stash_count; i++)
    {
        delete stash[i];
    }
}
MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
    this->stash_count = obj.stash_count;
    for (int i = 0; i < stash_count; i++)
    {
        stash[i] = obj.stash[i];
    }
    return *this;
}
//----------ORTHODOX------------
void  MateriaSource::learnMateria(AMateria* obj)
{
    if(stash_count < 4)
    {
        stash[stash_count] = obj->clone();
        stash_count++;
    }
    else
        cout << "MateriaSource: stash is full."<< endl;
}

AMateria* MateriaSource::createMateria(string const &type)
{
    for (int i = 0; i < stash_count;i++)
    {
        if(stash[i]->getType() == type)
        {
            return stash[i];
        }
    }
    return 0;
}

