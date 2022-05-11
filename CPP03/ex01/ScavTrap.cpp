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
	std::cout << "Constructor ScavTrap " << name << " was called\n";
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitpoints(100);
	this_>guard = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << this->getName() << " was callsed\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setName(other.getName());
	this->setHitpoints(other.getHitpoints());
	this->setEnergyPoints(other.getEnergyPoints());
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
		std::cout << this->getName() << " exited the Gate keeper mode.\n"
	}
	else if (this->guard == 0)
	{
		this->guard = 1;
		std::cout << this->getName() << " the Gate keeper mode activated.\n"
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->getHp() + amount > maxHitPoint)
		this->setHitpoints(maxHitPoint);
	else
		this->setHitpoints(this->getHp() + amount);
	std::cout << "ScavTrap " << this->getName() << "repaired\n";
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->getName() << " attack " << target <<
		", causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (this->getHp()< amount)
		this->setHitpoints(0);
	else
		this->setHitpoints(this->getHp() - amount);
	std::cout << "ScavTrap " << this->getName() << " received damage\n";
}