#include "ZombieEvent.hpp"
std::string NameArray[10] = {"budz" , "pain" , "konan","nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi"};

ZombieEvent::ZombieEvent(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie::Zombie(name, this->_type);
}

void ZombieEvent::randomChump()
{
	std::string name = NameArray[std::rand()%10];
	Zombie deadGuy = Zombie::Zombie(name, this->_type);
	deadGuy.announce();
}