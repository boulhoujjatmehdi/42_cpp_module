
#ifndef CONTACT_HPP
#define CONTACT_HPP

	// #include "header.hpp"

	#include <iostream>
    #include <list>
    #include <cstring>
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	using std::to_string;


	class Contact
	{
		string	PhoneNumber;
		string	FirstName;
		string	LastName;
		string	Nickname;
		string	DarkestSecret;
		int		Index;
		public:

		string g_PhoneNumber();
		string g_FirstName();
		string g_LastName();
		string g_NickName();
		string g_DarkestSecret();
		int g_Index();

		void s_Index(int idx);
		void s_FirstName(string str);
		void s_LastName(string str);
		void s_NickName(string tmp);
		void s_DarkestSecret(string tmp);
		void s_PhoneNumber(string tmp);
		void SetContact(string firstname, string lastname, string nickname, string phonenumber, string darkestsecret);

		void ShowContact();

		void ShowContactDetail();

	};

#endif