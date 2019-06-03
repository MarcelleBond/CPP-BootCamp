#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class phonebook
{
	private:
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
	public:
		std::string getfirst_name();
		std::string getlast_name();
		std::string getnickname();
		std::string getlogin();
		std::string getpostal_address();
		std::string getemail_address();
		std::string getphone_number();
		std::string getbirth_date();
		std::string getfavorite_meal();
		std::string getunderwear_color();
		std::string getdarkest_secret();
		void		setfirst_name(std::string value);
		void		setlast_name(std::string value);
		void		setnickname(std::string value);
		void		setlogin(std::string value);
		void		setpostal_address(std::string value);
		void		setemail_address(std::string value);
		void		setphone_number(std::string value);
		void		setbirth_date(std::string value);
		void		setfavorite_meal(std::string value);
		void		setunderwear_color(std::string value);
		void		setdarkest_secret(std::string value);
};

std::string	caps_string(std::string str);
std::string	cut(std::string value);
phonebook	add();
void		search(phonebook book[], int index);
void		display_contact(phonebook book[], int index, int limit);

#endif