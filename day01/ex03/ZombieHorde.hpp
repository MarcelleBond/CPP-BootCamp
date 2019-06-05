#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	void	announce(Zombie zombieArray[], int N);
public:
			ZombieHorde(int N);
			~ZombieHorde();
	
};

#endif