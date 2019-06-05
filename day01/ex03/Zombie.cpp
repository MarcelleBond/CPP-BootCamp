#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}
Zombie::Zombie()
{
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::setType(std::string type)
{
	this->_type = type; 
}
void Zombie::announce()
{
	std::cout << "Hi everyone. My name is  " << this->_name << " and I'm a " << this->_type << " type of zombie" << std::endl;
}