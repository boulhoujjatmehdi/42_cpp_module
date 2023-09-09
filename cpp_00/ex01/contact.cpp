#include "contact.hpp"

void set_ten(char *tmp, string str)
{
    if(str.length() <= 10)
        memcpy(tmp , str.c_str(), str.length());
    else
    {
        memcpy(tmp, str.substr(0, 10).c_str(), str.substr(0, 10).length());
        tmp[9] = '.';
    }

}

void Contact::SetContact(string firstname, string lastname, string nickname, string phonenumber, string darkestsecret)
{
    FirstName = firstname;
    LastName  = lastname;
    Nickname  = nickname;
    PhoneNumber = phonenumber;
    DarkestSecret =darkestsecret;
}

void Contact::ShowContact()
{
    char tmp[45];
    tmp[44] = 0;
    memset(tmp, ' ', 44);
    tmp[10] = tmp[21] = tmp[32] = tmp[43] = '|';
    memcpy(tmp, to_string(Index).c_str(), 1);
    set_ten(tmp+11 , FirstName);
    set_ten(tmp+22 , LastName);
    set_ten(tmp+33 , Nickname);
    cout << "--------------------------------------------\n";
    cout << tmp <<endl;
}
void Contact::ShowContactDetail()
{
    char tmp[56];
    tmp[55] = 0;
    memset(tmp, ' ', 55);
    tmp[10] = tmp[21] = tmp[32] = tmp[43] = tmp[54] = '|';
    memcpy(tmp, to_string(Index).c_str(), 1);
    set_ten(tmp+11 , FirstName);
    set_ten(tmp+22 , LastName);
    set_ten(tmp+33 , Nickname);
    set_ten(tmp+44 , PhoneNumber);
    cout << "-------------------------------------------------------\n";
    cout << tmp <<endl;
}


////// GETTERS //////

string Contact::g_PhoneNumber()
{
    return PhoneNumber;
}
string Contact::g_FirstName()
{
    return FirstName;
}
string Contact::g_LastName()
{
    return LastName;
}
string Contact::g_NickName()
{
    return Nickname;
}
string Contact::g_DarkestSecret()
{
    return DarkestSecret;
}
int Contact::g_Index()
{
    return Index;
}
//////// SETTERS /////////

void Contact::s_Index(int idx)
{
    this->Index = idx;
}
void Contact::s_FirstName(string str)
{
    FirstName = str ;
}
void Contact::s_LastName(string str)
{
    LastName = str ;
}
void Contact::s_NickName(string tmp)
{
     Nickname = tmp;
}
void Contact::s_DarkestSecret(string tmp)
{
     DarkestSecret = tmp;
}
void Contact::s_PhoneNumber(string tmp)
{
    PhoneNumber = tmp;
}
