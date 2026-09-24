#include "Zombie.hpp"

int main()
{
	Zombie	*horde;
	int		zombies;
	int		i;

	zombies = 15;
	horde = zombieHorde(zombies, "Pepe");
	i = 0;
	while (i < zombies)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;

	std::cout<< std::endl;
    horde = zombieHorde(1, "Bob");
    horde[0].announce();
    delete[] horde;

	std::cout<< std::endl;
    horde = zombieHorde(0, "Nobody");
    delete[] horde;

	return (0);
}
