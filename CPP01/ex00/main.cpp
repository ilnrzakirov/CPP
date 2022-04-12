#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie;
	randomChump("Ofo");
	zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;
	return (0);
}