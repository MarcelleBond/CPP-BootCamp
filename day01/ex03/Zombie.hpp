#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
	std::string	_type;

public:
	void	setName(std::string name);
	void	setType(std::string type);
	void	announce();
			Zombie(std::string name, std::string type);
			Zombie();
};

#endif