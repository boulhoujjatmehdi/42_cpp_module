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

    // void add_idea(string ida);
    // string get_idea(int nb);

    string get_idea(int idx);
    void add_idea(string str);
};


#endif