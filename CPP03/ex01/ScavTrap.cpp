#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "\"Standart ScavTrap constructor was called\n";
	this->setName("None");
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->guard = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	std::cout << "Constructor ScavTrap " + name + " was called" << std::endl;
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitpoints(100);
	this_>guard = 0;
}