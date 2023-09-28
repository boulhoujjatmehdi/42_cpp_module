#include "Ice.hpp"
//---------ORTHODOX---------------

Ice::Ice()
{
    // cout << "ICE:           Default Constructor Called"<< endl;
    this->type = "ice";
}
Ice::Ice(Ice& obj)
{
    // cout << "ICE:           Copy Constructor Called"<< endl;
    this->type = obj.type;
}
Ice& Ice::operator=(Ice& obj)
{
    // cout << "ICE:           Copy Assignement overload Called"<< endl;
    this->type = obj.type;
    return *this;
}
Ice::~Ice()
{
    // cout << "ICE:           Copy Constructor Called"<< endl;
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
