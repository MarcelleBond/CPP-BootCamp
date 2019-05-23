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