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