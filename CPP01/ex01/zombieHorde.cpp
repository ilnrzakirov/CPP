#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombie;
	int i;

	if (N < 0)
		return (NULL);
	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].set_name(name);
		i++;
	}
	return (zombie);
}
