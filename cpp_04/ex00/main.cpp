
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << "-" << std::endl;
std::cout << i->getType() << "-" << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

cout << "--------------------"<< endl;
const WrongAnimal* aa = new WrongCat();
aa->makeSound();
cout << "--------------------"<< endl;
WrongCat bb;
bb.makeSound();
//TODO: DELETE FOR ESCAPE LEAKS.

system("leaks progName");
return 0;
}


//______________THEIR MAIN__________________

// int main() {
//     const Animal* aa = new Dog;
//     const Animal* bb = new Cat;

//     aa->makeSound();  // Output: "Bark!"
//     bb->makeSound();  // Output: "Meow!"

//     delete aa;
//     delete bb;

//     return 0;
// }