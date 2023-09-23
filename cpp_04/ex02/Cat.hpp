#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"
#include "Brain.hpp"
class Cat:public Animal
{
    Brain* brain;
    public:
        Cat();
        ~Cat();
        Cat(Cat& obj);
        Cat& operator=(Cat& obj);
        void makeSound() const;
};


#endif