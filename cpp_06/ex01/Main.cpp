#include "Serializer.hpp"


int main()
{
    Data dt;
    Serializer serial;
    cout << &dt << endl;
    uintptr_t ll = serial.serialize(&dt);
    Data * dd = serial.deserialize(ll);
    cout << dd << endl;
}