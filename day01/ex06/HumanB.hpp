#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
// #include <string>

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;	
public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif