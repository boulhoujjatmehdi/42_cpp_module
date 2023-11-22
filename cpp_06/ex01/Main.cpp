#include "Serializer.hpp"


int main()
{
    Data dt;
    // Serializer serial;
    dt.i = 42;
    cout << "before serializer  :"<< &dt << endl;
    uintptr_t ll = Serializer::serialize(&dt);
    cout << "after serializer   :"<<ll << endl;
    Data * dd = Serializer::deserialize(ll);
    cout << "after deserializer :"<< dd << endl;
    cout << "after deserializer i :"<< dd->i << endl;
}