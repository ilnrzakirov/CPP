#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() {
	if (!_weapon)
		std::cout << _name << " tries to attack but has no weapon\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() <<
		"\n";
}
