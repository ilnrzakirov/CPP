#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
private:
	static const int maxHitPoint = 100;
	int guard;
public:
	void guardGate();
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	void attack(const std::string& target);
};

#endif
