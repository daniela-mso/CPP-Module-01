#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}


void	Harl::_debug(void)
{
	std::cout <<  "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." <<std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}

	switch (i)
	{
		case 0:
			Harl::_debug();
			std::cout << std::endl;
			// fallthrough

		case 1:
			Harl::_info();
			std::cout << std::endl;

			// fallthrough

		case 2:
			Harl::_warning();
			std::cout << std::endl;

			// fallthrough

		case 3:
			Harl::_error();
			std::cout << std::endl;

			// fallthrough

		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;

			break;
	}
	
}