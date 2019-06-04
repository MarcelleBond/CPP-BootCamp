#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void Zombie::announce()
{
	std::cout << "Hi everyone. I'm " << this->_name << " and I'm a " << this->_type << " of zombie" << std::endl;
}