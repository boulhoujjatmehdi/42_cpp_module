#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    int NbContact;
    Contact contacts[8];
public:
    PhoneBook();

    void AddContact(Contact ct);

    void ShowContacts();

    void SingleContact(int idx);

};




#endif