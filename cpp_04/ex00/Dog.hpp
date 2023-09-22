#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class Dog:public Animal
{
public:
    Dog();
    ~Dog();
    Dog(Dog& obj);
    Dog& operator=(Dog& obj);

    void makeSound()const;
};


#endif