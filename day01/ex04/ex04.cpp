#include <string>
#include <iostream>
int main()
{
    std::string *og = new std::string("HI THIS IS BRAIN");
    std::cout << *og << std::endl;
    std::string **copy = &og;
    std::cout << **copy << std::endl;

    return 0;
}
