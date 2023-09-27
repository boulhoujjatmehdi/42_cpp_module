#include "Ice.hpp"
//---------ORTHODOX---------------

Ice::Ice()
{
    cout << "Materia: Default Constructor Called"<< endl;
    this->type = "ice";
}
Ice::Ice(Ice& obj)
{
    cout << "Materia: Copy Constructor Called"<< endl;
    this->type = obj.type;
}
Ice& Ice::operator=(Ice& obj)
{
    cout << "Materia: Copy Assignement overload Called"<< endl;
    this->type = obj.type;
    return *this;
}
Ice::~Ice()
{
    cout << "Materia: Copy Constructor Called"<< endl;
}
//---------ORTHODOX---------------

Ice* Ice::clone()const
{
    Ice* ice  = new Ice();
    return ice;
}

void Ice::use(ICharacter& target)
{
    cout << "* shoots an ice bolt at "<<target.getName()<<" *"<< endl;
}
