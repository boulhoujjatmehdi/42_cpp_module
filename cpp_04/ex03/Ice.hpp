#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
using std::cout;
using std::endl;
using std::string;

class Ice:public AMateria
{

    public:
    //---------ORTHODOX---------------
    Ice();
    Ice(Ice& obj);
    Ice& operator=(Ice& obj);
    ~Ice();
    //---------ORTHODOX---------------

    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};


#endif