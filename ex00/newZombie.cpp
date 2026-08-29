#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *randomZombie = new Zombie(name);
	return (randomZombie);
}
