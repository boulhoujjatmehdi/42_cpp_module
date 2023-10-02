#include "Cure.hpp"
//---------ORTHODOX---------------

Cure::Cure()
{
    // cout << "CURE:          DefaultConstructor Called"<< endl;
    this->type = "cure";
}
Cure::Cure(Cure& obj)
{
    // cout << "CURE:          Copy Constructor Called"<< endl;
    this->type = obj.type;
}
Cure& Cure::operator=(Cure& obj)
{
    // cout << "CURE:          Copy Assignement overload Called"<< endl;
    this->type = obj.type;
    return *this;
}
Cure::~Cure()
{
    // cout << "CURE:          Copy Constructor Called"<< endl;
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