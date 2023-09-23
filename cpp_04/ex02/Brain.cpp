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

    cout << "Brain: Destructor called"<< endl;
    *this = obj;
}
Brain& Brain::operator=(Brain& obj)
{
    cout << "Brain: Destructor called"<< endl;
    // this->ideas = obj.ideas;
    (void)obj;//TODO: THIS SHOULD BE ASSIGNED FROM "OBJ" TO "THIS".
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
    if(idx >=0 && idx < nbIdeas)
        return ideas[idx];
    return "!!!!NO IDEA FOUND IN THIS INDEX!!!!";
}


