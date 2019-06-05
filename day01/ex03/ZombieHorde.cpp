#include "ZombieHorde.hpp"
std::string NameArray[10] = {"budz" , "pain" , "konan","nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi"};

ZombieHorde::ZombieHorde(int N)
{
	Zombie zombieArray[N];
	for (int i = 0; i < N; i++)
	{
		zombieArray[i].setName(NameArray[std::rand()%10]);
		zombieArray[i].setType("killer");
	}
	announce(zombieArray, N);
}

void ZombieHorde::announce(Zombie zombieArray[], int N)
{
	for(int i = 0; i < N; i++)
	{
		zombieArray[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
}