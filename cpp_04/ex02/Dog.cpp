#include "Dog.hpp"

//----------ORTHODOX----------

Dog::Dog()
{
    cout << "Dog:    Default constructor called"<< endl;
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
    this->brain = nullptr;
    *this = obj;
}
Dog& Dog::operator=(Dog& obj)
{
    cout << "Dog:    Copy operator overload called"<< endl;
    if(this->brain)
        delete this->brain;
    this->type = obj.type;
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