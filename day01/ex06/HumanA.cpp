#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name << "attacks with his/her " << this->_weapon->getType();
}