#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "the DiamondTrap constructor called\n";
	this->name = "_";
	ClapTrap::name = this->name + "clap_name";
	this->hp = FragTrap::getHp();
	this->energy = ScavTrap::getEnergy();
	this->attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	std::cout << "the DiamondTrap constructor from " << name << "is called\n";
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::getHp();
	this->energy = ScavTrap::getEnergy();
	this->attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	std::cout << "Copy constructor is called\n";
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "the DiamondTrap destructor is called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout <<"Copy assignment operator called\n";
	this->name = diamondTrap.getName();
	this->hp = diamondTrap.getHp();
	this->energy = diamondTrap.getEnergy();
	this->attackDamage = diamondTrap.getAttackDamage();
	return  (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << " clapTrap name : " <<
	ClapTrap::name << " HP : " << this->getHp() << " Energy: " <<
	this->getEnergy() << " attackDamage: " << this->getAttackDamage() <<
	std::endl;
}
