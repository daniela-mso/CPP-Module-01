#include <iostream>
#include <string>
#include <fstream>


void	replace_str(std::ifstream &file, std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cout << std::endl << "Error, cant have an empry search string, bucko!" << std::endl;
		return;
	}
	size_t	s1_length = s1.length();


	bool	isEmpty = true;
	std::string line;
	while (std::getline(file, line))
	{
		isEmpty = false;
		size_t s1_position = line.find(s1);
		if (s1_position == 0 || !isalnum(line[s1_position - 1]))
		{
			if ( s1_position + s1_length == line.length() ||
				!isalnum(line[s1_position + s1_length]))
			{
				line.erase(s1_position, s1_length);
				line.insert(s1_position, s2);
			}
		}


		std::cout << line;



	}
	if (isEmpty)
	{
		std::cout << std::endl << "The selected file is empty!" << std::endl;
		return;
	}


}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}

	std::ifstream myFile(av[1]);
	if (!myFile)
	{
		std::cout << std::endl << "Error, Non existing file selected: " << av[1] << std::endl;
		return (1);
	}

	// std::ofstream newFile("newFile.txt");
	// newFile << "hello";
	

	replace_str(myFile, av[2], av[3]);

	return 0;
}