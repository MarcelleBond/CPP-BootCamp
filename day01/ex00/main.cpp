#include "Pony.hpp"

void ponyOnTheHeap()
{
	std::cout << "and on the heap of s#%t ";
	Pony *ponyOnTheHeap = new Pony("john");
	std::cout << "the pony on the heap of s#%t said ";
	ponyOnTheHeap->ponySays();
	std::cout << "then pony set heap of s#%t alite and ";
	delete ponyOnTheHeap; 
}

void ponyOnTheStack()
{
	std::cout << "once apon a time on a hay stack ";
	Pony ponyOnTheStack("steve");
	std::cout << "and the pony on the hay stack said ";
	ponyOnTheStack.ponySays();
	std::cout << "then pony set hay stack alite and ";
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();

	return 0;
}
