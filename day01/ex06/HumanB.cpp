#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his/her " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}