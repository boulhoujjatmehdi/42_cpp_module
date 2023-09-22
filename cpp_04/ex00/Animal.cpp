#include "Animal.hpp"
//----------ORTHODOX------------
Animal::Animal()
{
    cout << "Animal: Defualt constructor called"<< endl;
}
Animal::~Animal()
{
    cout << "Animal: Destructor called"<< endl;
}
Animal::Animal(Animal& obj)
{
    *this = obj;
}
Animal& Animal::operator=(Animal& obj)
{
    this->type = obj.type;
    return *this;
}
//----------ORTHODOX------------

void Animal::makeSound()const
{
    cout << "Animal: Animal sound" << endl;
}

string Animal::getType()const
{
    return type;
}
void Animal::setType(string type)
{
    this->type = type;
}

