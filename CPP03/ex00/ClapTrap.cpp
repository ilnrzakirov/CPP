#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "the destructor from " + this->name + " called\n";
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
	std::cout << "name: " << this->name << " hp: " << this->hp << " energy: " <<
	this->energy << "\n";
}

ClapTrap::ClapTrap() {
	std::cout << "the constructor is called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout <<"Copy assignment operator called\n";
	this->name = other.getName();
	this->hp = other.getHp();
	this->energy = other.getEnergy();
	this->attackDamage = other.getAttackDamage();
	return  (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor is called\n";
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

void ClapTrap::attack(const std::string &target) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died.\n";
		return;
	}
	if (this->getEnergy() > 0) {
		std::cout << "ClapTrap " + this->name + " attacks " + target +
					 ", causing " << this->getAttackDamage()
				  << " points of damage\n";
	}
	else
		std::cout << "There is no energy\n";

}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp > 0) {
		if (this->hp < amount)
			this->hp = 0;
		else
			this->hp = this->hp - amount;
		std::cout << this->name << " received damage\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died.\n";
		return;
	}
	if (this->hp < 10) {
		if (this->hp + amount > 10)
			this->hp = 10;
		else
			this->hp = this->hp + amount;
		std::cout << this->name << " recovered\n";
	}
}
