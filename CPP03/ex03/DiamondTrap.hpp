#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string name;

public:
	void whoAmI();
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(string name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap &operator = (const DiamondTrap &diamondTrap);
	void attack(const std::string &target);
};