#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
	 this->_type = type;
}

std::string const getType()
{
	
}