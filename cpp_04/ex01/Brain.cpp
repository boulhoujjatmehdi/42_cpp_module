#include "Brain.hpp"
//---------ORTHODOX------------------
Brain::Brain()
{
    cout << "Brain: Defualt constructor called"<< endl;
}
Brain::~Brain()
{
    cout << "Brain: Destructor called"<< endl;
}
Brain::Brain(Brain& obj)
{

    cout << "Brain: Copy constructor called"<< endl;
    *this = obj;
}
Brain& Brain::operator=(Brain& obj)
{
    cout << "Brain: Copy assignement overload called"<< endl;
    this->nbIdeas = obj.nbIdeas;
    for (int i = 0; i < nbIdeas; i++)
        this->ideas[i] = obj.ideas[i];
    
    return *this;
}
//---------ORTHODOX------------------

int Brain::getNb()
{
    return nbIdeas;
}
void Brain::setNb(int newNb)
{
    nbIdeas = newNb;
}

void Brain::addIdea(string str)
{
    if(nbIdeas < 100)
    {
        ideas[nbIdeas] = str;
        nbIdeas++;
    }
}
string Brain::getIdea(int idx)
{
    if(nbIdeas &&  idx >=0 && idx < nbIdeas)
        return ideas[idx];
    return "!!!!NO IDEA FOUND IN THIS INDEX!!!!";
}


