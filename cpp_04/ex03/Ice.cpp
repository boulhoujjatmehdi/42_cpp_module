#include "Ice.hpp"
//---------ORTHODOX---------------

Ice::Ice()
{
    cout << "Materia: Default Constructor Called"<< endl;
}
Ice::Ice(Ice& obj)
{
    cout << "Materia: Copy Constructor Called"<< endl;
    this->type = obj.type;
}
Ice& Ice::operator=(Ice& obj)
{
    cout << "Materia: Copy Assignement overload Called"<< endl;
    *this = obj;
    return *this;
}
Ice::~Ice()
{
    cout << "Materia: Copy Constructor Called"<< endl;
}
//---------ORTHODOX---------------

