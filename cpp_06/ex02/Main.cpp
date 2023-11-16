#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::srand(std::time(nullptr));
    int random = std::rand() % 3;
    if(random == 0)
        return new A;
    if(random == 1)
        return new B;
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
        cout << "*A"<< endl;
    else if((pt = dynamic_cast<B*>(ptr)))
        cout << "*B"<< endl;
    else if((pt = dynamic_cast<C*>(ptr)))
        cout << "*C"<< endl;
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
    bs = NULL;
    identify(bs);
    identify(NULL);
    return 0;
}