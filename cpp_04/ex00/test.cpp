#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const;
};

void Animal::makeSound() const {
    cout << "Generic animal sound" << endl;
}

class Dog : public Animal {
public:
    void makeSound() const;
};

void Dog::makeSound() const {
    cout << "Bark!" << endl;
}

class Cat : public Animal {
public:
    void makeSound() const;
};

void Cat::makeSound() const {
    cout << "Meow!" << endl;
}

int main() {
    const Animal* aa = new Dog;
    const Animal* bb = new Cat;

    aa->makeSound();  // Output: "Bark!"
    bb->makeSound();  // Output: "Meow!"

    delete aa;
    delete bb;

    return 0;
}