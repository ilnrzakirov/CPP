#include "FragTrap.hpp"

FragTrap::FragTrap() {
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(20);
	std::cout << "the FragTrap constructor is called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "the " << this->getName() << "constructor FragTrap is "
											  "called\n";
}

FragTrap::~FragTrap() {
	std::cout << "the FragTrap destructor from " << this->getName() << " is "
																	   "called\n";
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	std::cout << "Copy constructor is called\n";
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	std::cout <<"Copy assignment operator called\n";
	setName(fragTrap.getName());
	setHitpoints(fragTrap.getHp());
	setEnergyPoints(fragTrap.getEnergy());
	setAttackDamage(fragTrap.getAttackDamage());
	return  (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << this->getName() << " give me a five!\n";
}