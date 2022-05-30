#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "the FragTrap constructor is called\n";
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "the " << this->getName() << "constructor is called\n";
}

FragTrap::~FragTrap() {
	std::cout << "the FragTrap destructor from " << this->getName() << "is "
																	   "called\n";
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	std::cout << "Copy constructor is called\n";
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	std::cout <<"Copy assignment operator called\n";
	this->name = other.getName();
	this->hp = other.getHp();
	this->energy = other.getEnergy();
	this->attackDamage = other.getAttackDamage();
	return  (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << this->name << " give me a five!\n";
}