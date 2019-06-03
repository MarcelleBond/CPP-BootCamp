#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "the pony was born" << std::endl;
}

Pony::~Pony()
{
	std::cout << "the pony died" << std::endl;
}

void Pony::ponySays()
{
	std::cout << "well this sucks. I'm out of here b#%!hess" << std::endl;
}