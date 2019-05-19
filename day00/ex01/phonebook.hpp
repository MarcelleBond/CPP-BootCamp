#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define getName(var) #var
#include <iostream>

class phonebook
{
	private:
		/* data */
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birth_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
};

std::string caps_string(std::string str);
phonebook add(/* args */);
void search();

#endif