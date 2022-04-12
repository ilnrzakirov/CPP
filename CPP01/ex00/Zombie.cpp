#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << "the zombie has been eliminated\n";
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ…\n";
}