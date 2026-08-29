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

	return (0);
}
