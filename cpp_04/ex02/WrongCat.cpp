

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    cout << "WrongCat: Defaultconstructor called"<< endl;
}
WrongCat::WrongCat(WrongCat& obj)
{
    cout << "WrongCat: Copy constructor called"<< endl;
    *this = obj;
}
WrongCat& WrongCat::operator=(WrongCat& obj)
{
    cout << "WrongCat: Copy Assignement operator overload called"<< endl;
    this->type = obj.type;
    return *this;
}
WrongCat::~WrongCat()
{
    cout << "WrongCat: Destructor called"<< endl;

}

void WrongCat::makeSound()const
{
    cout << "WrongCat: WrongCat_sound" << endl;
}
