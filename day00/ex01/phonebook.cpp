#include "phonebook.hpp"

int main(int argc, char const *argv[])
{
	std::string request;
	phonebook book[8];
	int i = 0;
	while (1)
	{
		std::cout << "Please type in your command, ADD, SEARCH OR EXIT \n";
		std::cin >> request;
		request = caps_string(request);
		if (!request.compare("EXIT"))
			return 0;
		else if (!request.compare("SEARCH"))
			search();
		else if (!request.compare("ADD"))
		{
			if (i != 8)
			{
				book[i] = add();
				i++;
			}
			else
				std::cout << "Your little black book is full";
		}
	}
	return 0;
}

std::string caps_string(std::string str)
{
	int j = 0;
	while (str[j])
	{
		str[j] = std::toupper(str[j]);
		j++;
	}
	return str;
}

phonebook add()
{
	phonebook contact;
	std::cout << "Please enter the contacts first name";
	std::getline(std::cin, contact.first_name);
	std::cout << "Please enter the contacts last name";
	std::getline(std::cin, contact.last_name);
	std::cout << "Please enter the contacts nickname";
	std::getline(std::cin, contact.nickname);
	std::cout << "Please enter the contacts login";
	std::getline(std::cin, contact.login);
	std::cout << "Please enter the contacts postal address";
	std::getline(std::cin, contact.postal_address);
	std::cout << "Please enter the contacts email address";
	std::getline(std::cin, contact.email_address);
	std::cout << "Please enter the contacts phone number";
	std::getline(std::cin, contact.phone_number);
	std::cout << "Please enter the contacts birth date";
	std::getline(std::cin, contact.birth_date);
	std::cout << "Please enter the contacts favorite meal";
	std::getline(std::cin, contact.favorite_meal);
	std::cout << "Please enter the contacts underwear color";
	std::getline(std::cin, contact.underwear_color);
	std::cout << "Please enter the contacts darkest secret";
	std::getline(std::cin, contact.darkest_secret);
	return contact;
}

void search()
{
	
}