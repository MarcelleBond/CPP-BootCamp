#include "phonebook.hpp"

int main()
{
	std::string request;
	phonebook book[8];
	int i;

	i = 0;
	while (true)
	{
		std::cout << "Please type in your command, ADD, SEARCH OR EXIT \n";
		std::getline(std::cin, request);
		request = caps_string(request);
		if (!request.compare("EXIT"))
			return 0;
		else if (!request.compare("SEARCH"))
			search(book, i);
		else if (!request.compare("ADD"))
		{
			if (i != 8)
				book[i++] = add();
			else
				std::cout << "Your little black book is full" << std::endl;
		}
	}
	return 0;
}

phonebook add()
{
	phonebook contact;
	std::string value;
	std::cout << "Please enter the contacts first name: ";
	std::getline(std::cin, value);
	contact.setfirst_name(value);
	std::cout << "Please enter the contacts last name: ";
	std::getline(std::cin, value);
	contact.setlast_name(value);
	std::cout << "Please enter the contacts nickname: ";
	std::getline(std::cin, value);
	contact.setnickname(value);
	std::cout << "Please enter the contacts login: ";
	std::getline(std::cin, value);
	contact.setlogin(value);
	std::cout << "Please enter the contacts postal address: ";
	std::getline(std::cin, value);
	contact.setpostal_address(value);
	std::cout << "Please enter the contacts email address: ";
	std::getline(std::cin, value);
	contact.setemail_address(value);
	std::cout << "Please enter the contacts phone number: ";
	std::getline(std::cin, value);
	contact.setphone_number(value);
	std::cout << "Please enter the contacts birth date: ";
	std::getline(std::cin, value);
	contact.setbirth_date(value);
	std::cout << "Please enter the contacts favorite meal: ";
	std::getline(std::cin, value);
	contact.setfavorite_meal(value);
	std::cout << "Please enter the contacts underwear color: ";
	std::getline(std::cin, value);
	contact.setunderwear_color(value);
	std::cout << "Please enter the contacts darkest secret: ";
	std::getline(std::cin, value);
	contact.setdarkest_secret(value);
	return contact;
}

void search(phonebook book[], int index)
{
	std::string contact;

	if (index == 0)
	{
		std::cout << "Please add contacts before searching" << std::endl;
		return;
	}
	std::cout << std::right << std::setw(10) << cut("Index") << "|";
	std::cout << std::right << std::setw(10) << cut("First name") << "|";
	std::cout << std::right << std::setw(10) << cut("last name") << "|";
	std::cout << std::right << std::setw(10) << cut("nickname") << "|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].getfirst_name()) << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].getlast_name()) << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].getnickname()) << "|" << std::endl;
	}
	std::cout << "Please choose the contact you want to view between 0 and " << index - 1 << std::endl;
	std::getline(std::cin, contact);
	if (std::isdigit(contact[0]))
		display_contact(book, std::atoi(contact.c_str()), index);
	else
		std::cout << "You did not input a number." << std::endl;
}

void display_contact(phonebook book[], int index, int limit)
{
	if (index < limit && index > -1)
	{
		std::cout << "First name: " << book[index].getfirst_name() << std::endl;
		std::cout << "Last name: " << book[index].getlast_name() << std::endl;
		std::cout << "Nickname: " << book[index].getnickname() << std::endl;
		std::cout << "Login: " << book[index].getlogin() << std::endl;
		std::cout << "Postal address: " << book[index].getpostal_address() << std::endl;
		std::cout << "Email address: " << book[index].getemail_address() << std::endl;
		std::cout << "Phone number: " << book[index].getphone_number() << std::endl;
		std::cout << "Birth date: " << book[index].getbirth_date() << std::endl;
		std::cout << "Favorite meal: " << book[index].getfavorite_meal() << std::endl;
		std::cout << "Underwear color: " << book[index].getunderwear_color() << std::endl;
		std::cout << "Darkest secret: " << book[index].getdarkest_secret() << std::endl;
	}
	else
		std::cout << "There is no contact filled in that index." << std::endl;
}

std::string cut(std::string value)
{
	if (value.length() > 10)
		value.replace(9, value.length(), ".");
	return value;
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