#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
using std::cout;
using std::endl;
using std::string;

class Cure:public AMateria
{
protected:
    string type;
public:
//---------ORTHODOX---------------
Cure();
Cure(Cure& obj);
Cure& operator=(Cure& obj);
~Cure();
//---------ORTHODOX---------------

virtual Cure* clone() const;
virtual void use(ICharacter& target);
};


#endif