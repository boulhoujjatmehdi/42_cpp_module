#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class AMateria
{
protected:
    string type;
public:
//---------ORTHODOX---------------
AMateria();
AMateria(AMateria& obj);
AMateria& operator=(AMateria& obj);
~AMateria();
//---------ORTHODOX---------------

AMateria(std::string const & type);
// [...]
std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
// virtual void use(ICharacter& target);
};


#endif