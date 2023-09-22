
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     Dog dog_obj;
//     dog_obj.makeSound();
//     Cat cat_obj;
//     cat_obj.makeSound();
    



// }
// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound();
// j->makeSound();
// meta->makeSound();

// delete i;
// // delete j;
// // delete meta;


// // const Animal*wrongCat = new Dog();


// return 0;
// }

int main() {
    const Animal* aa = new Dog;
    const Animal* bb = new Cat;

    aa->makeSound();  // Output: "Bark!"
    bb->makeSound();  // Output: "Meow!"

    delete aa;
    delete bb;

    return 0;
}