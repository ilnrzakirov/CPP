#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "the destructor from" + this->name + "called\n";
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->attackDamage = 0;
	std::cout << "the constructor is called\n";
	printInfo();
}

void ClapTrap::printInfo() {
	std::cout << "name: " + this->name + " hp: " + this.hp + " energy: " +
	this->energy + "\n";
}