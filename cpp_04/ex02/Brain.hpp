#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;
class Brain
{
    int nbIdeas;
    string ideas[100];
public:
    //--------ORTHODOX---------
    Brain();
    Brain(Brain& obj);
    Brain& operator=(Brain& obj);
    ~Brain();
    //--------ORTHODOX---------
    
    int getNb();
    void setNb(int newNb);

    void addIdea(string str);
    //idx starts from 0
    string getIdea(int idx);
};




#endif