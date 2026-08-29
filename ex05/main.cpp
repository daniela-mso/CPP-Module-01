#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << std::endl << "__________level DEBUG__________" << std::endl;

	harl.complain("DEBUG");

	std::cout << std::endl << "__________level INFO__________" << std::endl;

	harl.complain("INFO");

	std::cout << std::endl << "__________level WARNING__________" << std::endl;

	harl.complain("WARNING");

	std::cout <<std::endl << "__________level ERROR__________" << std::endl;

	harl.complain("ERROR");

	return (0);
}
