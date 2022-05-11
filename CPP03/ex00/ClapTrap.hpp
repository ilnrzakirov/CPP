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
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};