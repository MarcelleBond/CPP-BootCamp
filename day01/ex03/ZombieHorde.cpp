#include "ZombieHorde.hpp"
std::string NameArray[10] = {"budz" , "pain" , "konan","nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi"};

ZombieHorde::ZombieHorde(int N)
{
	this->zombieArray = new Zombie[N];
}

void ZombieHorde::announce()
{
	for(int i = 0; i < this->ZombieArray.length; i++)
	{
		this->ZombieArray.announce();
	}
}