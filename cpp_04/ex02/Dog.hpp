#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal
{
    Brain* brain;
public:
    Dog();
    ~Dog();
    Dog(Dog& obj);
    Dog& operator=(Dog& obj);

    void makeSound()const;

    string get_idea(int idx);
    void add_idea(string str);
};


#endif