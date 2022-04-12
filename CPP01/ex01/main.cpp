#include "Zombie.hpp"

int	main(void){
	Zombie *zombie = NULL;
	int N;
	int i;

	N = 8;
	i = 0;
	zombie = zombieHorde(N, "Foo");
	if (!zombie)
		return (1);
	while (i < N)
	{
		zombie->announce();
		i++;
	}
	delete[] zombie;
	return (0);
}
