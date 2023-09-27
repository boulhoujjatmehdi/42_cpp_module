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
        stash[stash_count] = obj;
        cout << "MateriaSource: learnMateria <"<< stash[stash_count]->getType()<< ">"<< endl;
        stash_count++;
    }
    else
        cout << "MateriaSource: stash is full."<< endl;
}

AMateria* MateriaSource::createMateria(string const &type)
{
    
    cout << "MateriaSource: CreateMaterial called!"<< endl;
    cout << "------------------------------------------"<< endl;
    for (int i = 0; i < stash_count;i++)
    {
        cout<< "== "<< stash[i]->getType() << " =="<< endl;
        if(stash[i]->getType() == type)
        {
            cout << "MateriaSource: return new materia!"<< endl;
            return stash[i];
        }
    }
    cout << "------------------------------------------"<< endl;
    return 0;
}

