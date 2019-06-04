#ifndef PONEY_H
#define PONEY_H

#include <iostream>

class Pony
{
	private:
		std::string name;
	public:
		
		void	ponySays(); 
				Pony(std::string name);
				~Pony();
};

#endif