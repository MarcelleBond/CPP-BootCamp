#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *zombieArray;
public:
			ZombieHorde(int N);
			~ZombieHorde();
	void	announce();
};

#endif