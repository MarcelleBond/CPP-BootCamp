#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
	const std::string *_type;
public:
	void setType(std::string type);
	const std::string &getType();
	Weapon(std::string type);
	~Weapon();
};

#endif