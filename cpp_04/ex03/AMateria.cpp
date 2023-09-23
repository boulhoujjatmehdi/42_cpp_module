#include "AMateria.hpp"
//---------ORTHODOX---------------

AMateria::AMateria()
{
    cout << "Materia: Default Constructor Called"<< endl;
}
AMateria::AMateria(AMateria& obj)
{
    cout << "Materia: Copy Constructor Called"<< endl;
    this->type = obj.type;
}
AMateria& AMateria::operator=(AMateria& obj)
{
    cout << "Materia: Copy Assignement overload Called"<< endl;
    *this = obj;
    return *this;
}
AMateria::~AMateria()
{
    cout << "Materia: Copy Constructor Called"<< endl;
}
//---------ORTHODOX---------------



