#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << "the pony was born and his name was " << name << std::endl;
}

Pony::~Pony()
{
	std::cout << "the pony died" << std::endl;
}

void Pony::ponySays()
{
	std::cout << "well this sucks. I'm out of here b#%!hess" << std::endl;
}