#include <iostream>
int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else 
	{
		int i = 1;
		while(argv[i])
		{
			int j = 0;
			while(argv[i][j])
			{
				char upper = std::toupper(argv[i][j]);
				std::cout << upper;
				j++;
			}
			i++;
		}
	}
	std::cout  << '\n';
	return 0;
}
