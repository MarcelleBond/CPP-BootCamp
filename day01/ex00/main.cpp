#include "Pony.hpp"

int main()
{
	std::cout << "once apon a time on a hay stack ";
	Pony ponyOnTheStack;
	std::cout << "and on the heap of s#%t ";
	Pony *ponyOnTheHeap = new Pony();
	std::cout << "the pony on the heap of s#%t said ";
	ponyOnTheHeap->ponySays();
	std::cout << "and the pony on the hay stack said ";
	ponyOnTheStack.ponySays();
	std::cout << "then pony set heap of s#%t alite and ";
	delete ponyOnTheHeap; 
	std::cout << "then pony set hay stack alite and ";
	return 0;
}
