#include "Zombie.hpp"

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZâ€¦\n";
}

Zombie::~Zombie() {
	std::cout << this->_name << " the zombie delete\n";
}
