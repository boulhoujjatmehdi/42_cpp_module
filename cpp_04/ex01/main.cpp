
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
   
    // {
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<< endl;
    //     cout << "SUBJECT'S MAIN"<< endl;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<< endl;
    //     const Animal* j = new Dog();
    //     const Animal* i = new Cat();
    //     delete j;
    //     delete i;
    // } 
    // {
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     cout << "CONSTRUCTION OF 6 ANIMALS HALF CATS HALF DOGS"                                 << endl;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     int nb = 6;
    //     Animal *anims[nb];

    //     for (int i = 0; i< nb;i++)
    //     {
    //         i < nb/2 ? anims[i] = new Cat(): anims[i] = new Dog();
    //         anims[i]->makeSound();
    //         cout << "============"                                                              << endl;
    //     }
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     cout << "DESTRUCTION OF ALL ANIMALS"                                                    << endl;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     for (int i = 0; i< nb;i++)
    //         delete anims[i];
    // } 
    // {
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     cout << "TESTS TO SHOW THAT BRAIN WORKS"                                                << endl;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     Dog *hayawan = new Dog();
    //     hayawan->add_idea("first idea");
    //     hayawan->add_idea("second idea");
    //     cout << hayawan->get_idea(0)<< endl;
    //     cout << hayawan->get_idea(1)<< endl;
    //     delete hayawan;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     Animal *ll = new Animal();
    //     ll->makeSound();
    //     delete ll;
    // }
    // { 
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     cout << "TEST THE DEEP COPY"                                                            << endl;
    //     cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"  << endl;
    //     Dog ct;
    //     ct.add_idea("idea one one one");
    //     ct.add_idea("idea two two two");
    //     Dog st = ct;
    //     cout << "week week "<< ct.get_idea(0)<< endl;
    //     cout << "week week "<< st.get_idea(0)<< endl;

    // }
    // {
    //     Dog basic;
    //     {
    //         Dog tmp = basic;
    //     }
    // }

    
    return 0;
}

