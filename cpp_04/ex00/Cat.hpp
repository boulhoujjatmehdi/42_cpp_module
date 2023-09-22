#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat:public Animal
{
public:
    Cat();
    ~Cat();
    Cat(Cat& obj);
    Cat& operator=(Cat& obj);
    void makeSound() const;
};


#endif