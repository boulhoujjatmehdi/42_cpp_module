#include "Cat.hpp"

//----------ORTHODOX----------

Cat::Cat()
{
    cout << "Cat:    Default constructor called"<< endl;
    this->type  = "Cat";
}
Cat::~Cat()
{
    cout << "Cat:    Destructor called"<< endl;
}
Cat::Cat(Cat& obj)
{
    cout << "Cat:    Copy constructor called"<< endl;
    *this = obj;
}
Cat& Cat::operator=(Cat& obj)
{
    cout << "Cat:    Copy assignement operator called"<< endl;
    this->type = obj.type;
    return *this;
}



//----------ORTHODOX----------

void Cat::makeSound() const 
{
    cout << "Cat:    MEOWING" << endl;
}