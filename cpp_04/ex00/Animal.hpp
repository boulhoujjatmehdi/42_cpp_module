#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
    string type;
public:
    //----ORTHODOX----
    Animal();
    virtual ~Animal();
    Animal(Animal& obj);
    Animal& operator=(Animal& obj);
    //----ORTHODOX----
    
    virtual void makeSound()const;

    string getType()const;
    void setType(string type);

    
};


#endif