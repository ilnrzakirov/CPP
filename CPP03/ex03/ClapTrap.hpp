#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hp;
	unsigned int energy;
	unsigned int attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(const ClapTrap &other);
	ClapTrap		&operator=(const ClapTrap &other);
	void printInfo();
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
	void setHitpoints(unsigned int hitpoints);
	void setEnergyPoints(unsigned int EnergyPoints);
	void setAttackDamage(unsigned int attackDamage);
	void setName(std::string name);
};

#endif
