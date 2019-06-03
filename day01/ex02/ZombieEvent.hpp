#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;
public:
			ZombieEvent(std::string type);
			~ZombieEvent();
	Zombie	*newZombie(std::string name);
	void	randomChump();
};

#endif