#include <string>
#include <iostream>
#include <fstream>

void myReplace(std::string &str,
               const std::string &oldStr,
               const std::string &newStr)
{
    std::string::size_type pos = 0u;
    while ((pos = str.find(oldStr, pos)) != std::string::npos)
    {
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}

int main(int argc, char const *argv[])
{
	std::ofstream file2;
	std::ifstream file1;
	std::string s1;
	std::string s2;
	std::string temp;
	std::string fileName;
	size_t count = 0;
	size_t count2 = 0;

	if (argc == 4)
	{
		s1 = argv[2];
		s2 = argv[3];
		fileName = argv[1];
		if (!s1.empty() && !s2.empty())
		{
			file1.open(fileName + ".txt");
			if (file1.fail())
			{
				std::cout << "Error: File not found";
				return 1;
			}
			if (file1.is_open())
			{
				while (std::getline(file1, temp))
				{
					count++;
				}
				file1.close();
			}
			file1.open(fileName+ ".txt");
			std::string str[count];
			if (file1.is_open())
			{
				while (std::getline(file1, temp))
				{
					str[count2++] = temp;
				}
				file1.close();
			}
			for (size_t i = 0; i < count; i++)
            {      
                myReplace(str[i], s1, s2);
            }
			file2.open(fileName + ".replace");
			if (file2.is_open())
			{
				for (size_t i = 0; i < count; i++)
				{
					file2 << str[i] << "\n";
				}
				file2.close();
				count2 = 1;
			}
		}
	}

	return 0;
}
