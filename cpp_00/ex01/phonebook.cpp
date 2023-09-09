#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    NbContact = 0;
}
void PhoneBook::AddContact(Contact ct)
{
    if(NbContact < 8)
    {
        ct.s_Index(NbContact+1);
        contacts[NbContact] = ct;
        NbContact ++;
    }
    else
    {
        for (int i = 1; i < 8 ; i++)
        {
            contacts[i].s_Index(i);
            contacts[i-1] = contacts[i];
        }
        ct.s_Index(NbContact);
        contacts[7] = ct;
    }
}

void PhoneBook::ShowContacts()
{
    for (int i = 0; i < NbContact; i++)
        contacts[i].ShowContact();
    cout << "********************************************\n";

}

void PhoneBook::SingleContact(int idx)
{
    bool bo = false;
    for (int i = 0; i < 8; i++)
    {
        if(contacts[i].g_Index() == idx)
        {
            contacts[i].ShowContactDetail();
            cout << "*******************************************************"<< endl;
            bo = true;
            break ;
        }
    }
    if(!bo)
        cout << "There is no contact in the INDEX ["<< idx << "].\n";
}