#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria *stash[4];
    int stash_count;
public:
    //Orthodox
    MateriaSource();
    ~MateriaSource();
    MateriaSource(std::string name);
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator=(const MateriaSource &obj);
    //Orthodox

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif