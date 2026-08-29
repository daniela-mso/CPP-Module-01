#include "Zombie.hpp"

int main()
{
	std::cout << "----------Testing randoChump----------" << std::endl << std::endl;
	randomChump("Rick");
	randomChump("Helder");
	std::cout << std::endl <<"--------------------------------------" << std::endl;

	std::cout << "----------Testing newZombie()----------" << std::endl << std::endl;
	Zombie *zombie = newZombie("Brew");
	zombie->announce();  //use -> and not .  since is a pointer storing a memory adress on the heap
	delete(zombie);
	zombie = newZombie("Chunky boiii");
	zombie->announce();
	delete(zombie);
	std::cout << std::endl << "---------------------------------------" << std::endl;

	return (0);
}
