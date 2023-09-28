#include "AMateria.hpp"
//---------ORTHODOX---------------

AMateria::AMateria()
{
    this->type = "type undifined";
    // cout << "AMateria:      Default Constructor Called"<< endl;
}
AMateria::AMateria(AMateria& obj)
{
    // cout << "AMateria:      Copy Constructor Called"<< endl;
    this->type = obj.type;
}
AMateria& AMateria::operator=(AMateria& obj)
{
    // cout << "AMateria:      Copy Assignement overload Called"<< endl;
    this->type = obj.type;
    return *this;
}
AMateria::~AMateria()
{
    // cout << "AMateria:      Copy Constructor Called"<< endl;
}
//---------ORTHODOX---------------



AMateria::AMateria(std::string const & type): type(type){}

void AMateria::use(ICharacter& target)
{
    cout << "AMateria: Default USE on <"<<target.getName()<<">!"<<endl;
}
string const& AMateria::getType() const
{
    return type;
}