#include "phonebook.hpp"

phonebook add()
{
	phonebook contact;
	std::cout << "Please enter the contacts first name: ";
	std::getline(std::cin, contact.first_name);
	std::cout << "Please enter the contacts last name: ";
	std::getline(std::cin, contact.last_name);
	std::cout << "Please enter the contacts nickname: ";
	std::getline(std::cin, contact.nickname);
	std::cout << "Please enter the contacts login: ";
	std::getline(std::cin, contact.login);
	std::cout << "Please enter the contacts postal address: ";
	std::getline(std::cin, contact.postal_address);
	std::cout << "Please enter the contacts email address: ";
	std::getline(std::cin, contact.email_address);
	std::cout << "Please enter the contacts phone number: ";
	std::getline(std::cin, contact.phone_number);
	std::cout << "Please enter the contacts birth date: ";
	std::getline(std::cin, contact.birth_date);
	std::cout << "Please enter the contacts favorite meal: ";
	std::getline(std::cin, contact.favorite_meal);
	std::cout << "Please enter the contacts underwear color: ";
	std::getline(std::cin, contact.underwear_color);
	std::cout << "Please enter the contacts darkest secret: ";
	std::getline(std::cin, contact.darkest_secret);
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
	std::cout << std::right << std::setw(10) << cut("nickname") << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].first_name) << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].last_name) << "|";
		std::cout << std::right << std::setw(10) << cut(book[i].nickname) << std::endl;
	}
	std::cout << "Please choose the contact you want to view between 0 and " << index - 1 << std::endl ;
	std::getline(std::cin, contact);
	if (std::isdigit(contact[0]))
		display_contact(book, std::atoi(contact.c_str()), index);
	else
		std::cout << "You did not input a number." << std::endl;
}

void display_contact(phonebook book[], int index, int limit)
{
	std::cout << index;
	if (index < limit && index > -1)
	{
		std::cout << "First name: " << book[index].first_name << std::endl;
		std::cout << "Last name: " << book[index].last_name << std::endl;
		std::cout << "Nickname: " << book[index].nickname << std::endl;
		std::cout << "Login: " << book[index].login << std::endl;
		std::cout << "Postal address: " << book[index].postal_address << std::endl;
		std::cout << "Email address: " << book[index].email_address << std::endl;
		std::cout << "Phone number: " << book[index].phone_number << std::endl;
		std::cout << "Birth date: " << book[index].birth_date << std::endl;
		std::cout << "Favorite meal: " << book[index].favorite_meal << std::endl;
		std::cout << "Underwear color: " << book[index].underwear_color << std::endl;
		std::cout << "Darkest secret: " << book[index].darkest_secret << std::endl;
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
