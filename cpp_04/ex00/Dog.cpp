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
    *this = obj;
}
Dog& Dog::operator=(Dog& obj)
{
    this->type = obj.type;
    return *this;
}
//----------ORTHODOX----------

void Dog::makeSound() const
{
    cout << "Dog:    BARKING"<< endl;
}