#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void Zombie::announce()
{
	std::cout << "Hi everyone. My name is  " << this->_name << " and I'm a " << this->_type << " type of zombie" << std::endl;
}