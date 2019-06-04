#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent *badGuy = new ZombieEvent;
    badGuy->setZombieType("killer");
    Zombie *goodGuy = badGuy->newZombie("pepi");
    goodGuy->announce();
    badGuy->randomChump();
	delete badGuy;
	delete goodGuy;
    return 0;
}