#include "Dog.hpp"

//----------ORTHODOX----------

Dog::Dog()
{
    cout << "Dog:    Defualt constructor called"<< endl;
    this->type  = "Dog";
}
Dog::~Dog()
{
    cout << "Dog:    Destructor called"<< endl;
}
Dog::Dog(Dog& obj)
{
    cout << "Dog:    Copy constructor called"<< endl;
    *this = obj;
}
Dog& Dog::operator=(Dog& obj)
{
    cout << "Dog:    Copy operator overload called"<< endl;
    this->type = obj.type;
    return *this;
}
//----------ORTHODOX----------

void Dog::makeSound() const
{
    cout << "Dog:    BARKING"<< endl;
}