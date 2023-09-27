#include "Cure.hpp"
//---------ORTHODOX---------------

Cure::Cure()
{
    cout << "Materia: Default Constructor Called"<< endl;
    this->type = "Cure";
}
Cure::Cure(Cure& obj)
{
    cout << "Materia: Copy Constructor Called"<< endl;
    this->type = obj.type;
}
Cure& Cure::operator=(Cure& obj)
{
    cout << "Materia: Copy Assignement overload Called"<< endl;
    this->type = obj.type;
    return *this;
}
Cure::~Cure()
{
    cout << "Materia: Copy Constructor Called"<< endl;
}
//---------ORTHODOX---------------

Cure* Cure::clone()const
{
    Cure* cure  = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    cout << "* heals "<<target.getName()<<"’s wounds *"<< endl;
}