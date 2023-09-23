#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    WrongCat(WrongCat& obj);
    WrongCat& operator=(WrongCat& obj);
    ~WrongCat();

    void makeSound() const;
};

#endif