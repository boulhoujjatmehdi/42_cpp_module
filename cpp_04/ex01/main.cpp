
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
   
    // {
    //     Cat basic;
    //     {
    //         Cat tmp = basic;
    //     }
    // }
    // cout << "================================"<<endl;
    {
        Cat *ct = new Cat();
        cout << "------"<< endl;
        Cat *ct1 = new Cat(*ct);
        (void )ct1;
        delete ct;
        delete ct1;
    }
    cout << "================================"<<endl;
    {
        Cat *ct_1 = new Cat;
        Cat *ct_2 = new Cat;
        ct_2->add_idea("IDEA ONE");
        *ct_1 = *ct_2;
        cout << ct_1->get_idea(0)<< endl;
        delete ct_1;
        delete ct_2;
    }

    
    return 0;
}

