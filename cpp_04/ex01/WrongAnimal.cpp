#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    cout << "WrongAnimal: Defaultconstructor called"<< endl;
}
WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
    cout << "WrongAnimal: Copy constructor called"<< endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj)
{
    cout << "WrongAnimal: Copy Assignement operator overload called"<< endl;
    this->type = obj.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal: Destructor called"<< endl;

}


void WrongAnimal::makeSound()const
{
    cout << "WrongAnimal: WrongAnimal_sound" << endl;
}
