
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
   
    {
        Cat basic;
        {
            Cat tmp = basic;
        }
    }
    cout << "================================"<<endl;
    {
        Cat *ct = new Cat();
        Cat *ct1 = new Cat(*ct);
        (void )ct1;
        delete ct;
        delete ct1;

    }
    cout << "================================"<<endl;
    {
        Cat *ct = new Cat();
        Cat *ct1 = new Cat();
        *ct1 = *ct;
        delete ct;
        delete ct1;
    }
    return 0;
}
