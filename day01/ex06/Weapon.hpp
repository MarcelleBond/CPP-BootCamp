#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string _type;
public:
	void setType(std::string type);
	std::string const getType();
	Weapon(std::string type);
	~Weapon();
};

#endif