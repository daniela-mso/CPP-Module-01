#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->_name = str;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
