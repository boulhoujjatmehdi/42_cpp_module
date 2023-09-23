#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
using std::cout;
using std::endl;
using std::string;

class Ice:public AMateria
{
protected:
    string type;
public:
//---------ORTHODOX---------------
Ice();
Ice(Ice& obj);
Ice& operator=(Ice& obj);
~Ice();
//---------ORTHODOX---------------

// AMateria(std::string const & type);
// // [...]
// std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const;
// virtual void use(ICharacter& target);
};


#endif