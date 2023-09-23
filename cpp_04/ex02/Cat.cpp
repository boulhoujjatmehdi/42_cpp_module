#include "Cat.hpp"


//----------ORTHODOX----------

Cat::Cat()
{
    cout << "Cat:    Defualt constructor called"<< endl;
    this->brain = new Brain();
    this->type  = "Cat";
}
Cat::~Cat()
{
    cout << "Cat:    Destructor called"<< endl;
    delete this->brain;
}
Cat::Cat(Cat& obj)
{
    *this = obj;
}
Cat& Cat::operator=(Cat& obj)
{
    this->type = obj.type;
    return *this;
}



//----------ORTHODOX----------

void Cat::makeSound() const 
{
    cout << "Cat:    MEOWING" << endl;
}