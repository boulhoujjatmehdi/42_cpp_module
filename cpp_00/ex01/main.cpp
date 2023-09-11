
#include "phonebook.hpp"

Contact add()
{
	Contact cont;

		cont.s_Index(0);
		cout << "FirstName : ";
		string tmp;
		getline(cin, tmp);
		cont.s_FirstName(tmp);
		if(cont.g_FirstName().empty())
			cont.s_Index(-1);
		cout << "LastName : ";
		getline(cin, tmp);
		cont.s_LastName(tmp);
		if(cont.g_LastName().empty())
			cont.s_Index(-1);
		cout << "Nickname : ";
		getline(cin, tmp);
		cont.s_NickName(tmp);
		if(cont.g_NickName().empty())
			cont.s_Index(-1);
		cout << "PhoneNumber : ";
		getline(cin, tmp);
		cont.s_PhoneNumber(tmp);
		if(cont.g_PhoneNumber().empty())
			cont.s_Index(-1);
		cout << "DarkestSecret : ";
		getline(cin, tmp);
		cont.s_DarkestSecret(tmp);
		if(cont.g_DarkestSecret().empty())
			cont.s_Index(-1);
	return cont;
}



bool containsNonNumeric(string str)
{

	for (int i = 0; str[i];i++)
	{
		if(i == 0 && (str[0] == '-' || str[i] == '+'))
			i++;
		if(!isdigit(str[i]))
			return true;
	}
	return false;
}

void search(PhoneBook phonebook)
{
	phonebook.ShowContacts();
	cout << "INDEX :";
	string str;
	getline(cin, str);
	if(str.empty() || containsNonNumeric(str) || str.length() > 10)
	{
		cout << "FAILED SEARCH!!!!" << endl;
		return ;
	}
	int nb = stoi(str);
	phonebook.SingleContact(nb);
}

int main()
{ 
	PhoneBook phonebook;
	Contact ct;
		cout << "PHONEBOOK STARTED\n\n";
	string str;
	while(1)
	{

		cout << "Available Options(ADD - SEARCH - EXIT)\n\n";
		getline(cin, str);
		if(str.empty())
			return 0;
		if(!strcmp("EXIT", str.c_str()))
			exit(0);
		else if(!strcmp("ADD", str.c_str()))
		{
			ct = add();
			if(ct.g_Index() != -1)
				phonebook.AddContact(ct);
			else
				cout << "!!!Veryfy your inputs you have sent ONE or MANY empty fields!!!" << endl	;
		}
		else if(!strcmp("SEARCH", str.c_str()))
		{
			search(phonebook);
		}
	}
	phonebook.ShowContacts();

}
