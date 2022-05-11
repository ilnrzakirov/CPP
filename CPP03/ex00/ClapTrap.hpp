#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int hp;
	unsigned int energy;
	unsigned int attackDamage;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(ClapTrap const &other);
	ClapTrap		&operator=(ClapTrap const &other);
	void printInfo();
};