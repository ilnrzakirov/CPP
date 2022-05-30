#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Standart ScavTrap constructor was called\n";
	this->setName("None");
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->guard = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor ScavTrap " << name << " was called\n";
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitpoints(100);
	this->guard = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << this->getName() << " was callsed\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setName(other.getName());
	this->setHitpoints(other.getHp());
	this->setEnergyPoints(other.getEnergy());
	this->setAttackDamage(other.getAttackDamage());
	std::cout <<"Copy assignment operator called\n";
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy constructor is called\n";
	*this = other;
}

void ScavTrap::guardGate() {
	if (this->guard == 1){
		this->guard = 0;
		std::cout << this->getName() << " exited the Gate keeper mode.\n";
	}
	else if (this->guard == 0)
	{
		this->guard = 1;
		std::cout << this->getName() << " the Gate keeper mode activated.\n";
	}
}

void ScavTrap::attack(const std::string &target) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died.\n";
		return;
	}
	if (this->getEnergy() > 0) {
		std::cout << "ScavTrap " + this->getName() + " attacks " + target +
					 ", causing " << this->getAttackDamage()
				  << " points of damage\n";
	}
	else
		std::cout << "There is no energy\n";

}
