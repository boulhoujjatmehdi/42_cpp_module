#include "Dog.hpp"

//----------ORTHODOX----------

Dog::Dog()
{
    cout << "Dog:    Defualt constructor called"<< endl;
    this->brain = new Brain();
    this->type  = "Dog";
}
Dog::~Dog()
{
    cout << "Dog:    Destructor called"<< endl;
    delete brain;
}
Dog::Dog(Dog& obj)
{
    cout << "Dog:    Copy constructor called"<< endl;
    *this = obj;
}
Dog& Dog::operator=(Dog& obj)
{
    cout << "Dog:    Copy operator overload called"<< endl;
    this->type = obj.type; //TODO: free before adding new one
    delete brain;
    this->brain = new Brain(*obj.brain);
    return *this;
}
//----------ORTHODOX----------

void Dog::makeSound() const
{
    cout << "Dog:    BARKING"<< endl;
}

string Dog::get_idea(int idx)
{
    return brain->getIdea(idx);
}
void Dog::add_idea(string str)
{
    brain->addIdea(str);
}