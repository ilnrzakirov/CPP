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

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor is called\n"
	*this = other;
}

unsigned int ClapTrap::getAttackDamage() const {
	return this->attackDamage;
}

unsigned int ClapTrap::getEnergy() const {
	return this->energy;
}

unsigned int ClapTrap::getHp() const {
	return this->hp;
}

std::string ClapTrap::getName() const {
	return this->name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->name = other.getName();
	this->hp = other.getHp();
	this->energy = other.getEnergy();
	this->attackDamage = other.getAttackDamage();
	return  *this;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " + this->name + " attacks " + target +
			", causing " +  this->getAttackDamage() + "points of damage\n"
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp < amount)
		this->hp = 0;
	else
		this->hp = this->hp - amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp + amount > 10)
		this->hp = 10;
	else
		this->hp = this->hp + amount;
}
