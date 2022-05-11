#include "ClapTrap.hpp"

int main(void){
	ClapTrap clap("Clap");
	ClapTrap trap("Trap");

	clap.attack(trap.getName());
}
