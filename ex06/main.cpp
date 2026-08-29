#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (0);
	}
	std::string level;
	Harl harl;
	level = av[1];
	harl.complain(level);

	return (0);
}