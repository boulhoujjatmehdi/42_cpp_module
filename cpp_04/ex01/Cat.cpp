#include "Cat.hpp"


//----------ORTHODOX----------

Cat::Cat()
{
    cout << "Cat:    Default constructor called"<< endl;
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
    cout << "Cat:    Copy constructor called"<< endl;
    this->brain = NULL;
    *this = obj;
}
Cat& Cat::operator=(Cat& obj)
{
    cout << "Cat:    Copy operator overload called"<< endl;
    if(this->brain)
        delete this->brain;
    this->type = obj.type;
    this->brain = new Brain(*obj.brain);
    return *this;
}
//----------ORTHODOX----------

void Cat::makeSound() const 
{
    cout << "Cat:    MEOWING" << endl;
}

string Cat::get_idea(int idx)
{
    return brain->getIdea(idx);
}
void Cat::add_idea(string str)
{
    brain->addIdea(str);
}