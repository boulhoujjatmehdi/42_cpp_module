#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(std::string name)
    {
        std::cout << "Constructor called! with params " << name << std::endl;
    }

    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }
    void Announce()
    {
        std::cout << "Announecement of myClass object\n";
    }

    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

MyClass* func(int n)
{
  MyClass* objArray = new MyClass[n]; // Dynamically allocate an array of 5 objects
  for (int i =0; i < n ; i++)
  {
    objArray[i] = MyClass("mehdi");
    objArray[i].Announce();
  }
  return objArray;
}

int main() {
    
    MyClass *objArray  = func(5);
    delete[] objArray; // Release the memory for the array, calling destructors for each object

    return 0;
}