#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;
class WrongAnimal
{
protected:
    string type;
public:
    //-------ORTHODOX--------
    WrongAnimal();
    WrongAnimal(WrongAnimal& obj);
    WrongAnimal& operator=(WrongAnimal& obj);
    ~WrongAnimal();
    //-------ORTHODOX--------

    void makeSound()const;
};



#endif