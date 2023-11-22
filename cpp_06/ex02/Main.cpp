#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::srand(std::time(NULL));
    int random = std::rand() % 3;
    if(random == 0)
    {
        cout << "A generated" << endl;
        return new A;
    }
    if(random == 1)
    {
        cout << "B generated" << endl;
        return new B;
    }
    cout << "C generated" << endl;
    return new C;
}

void identify(Base* ptr)
{
    if(!ptr)
    {
        cout << "NULL" << endl;
        return ;
    }
    Base *pt;
    if((pt = dynamic_cast<A*>(ptr)))
        cout << "A identified"<< endl;
    else if((pt = dynamic_cast<B*>(ptr)))
        cout << "B identified"<< endl;
    else if((pt = dynamic_cast<C*>(ptr)))
        cout << "C identified"<< endl;
    else 
        cout << "undefined type"<< endl;
}

void identify(Base& ref)
{
    try
    {   
        ref = dynamic_cast<A&>(ref);
        cout << "&A" << endl;
    }catch(std::bad_cast)
    {
    }
    try
    {   
        ref = dynamic_cast<B&>(ref);
        cout << "&B" << endl;
    }catch(std::bad_cast)
    {
    }
    try
    {   
        ref = dynamic_cast<C&>(ref);
        cout << "&C" << endl;
    }catch(std::bad_cast)
    {
    }

}

int main()
{
    Base* bs;
    bs = generate();
    identify(bs);
    delete bs;
    return 0;
}