#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "Wrong Animal";
}

std::string	 WrongAnimal::getType() const { return (type); }


WrongAnimal::WrongAnimal( WrongAnimal const & copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal makes sound" << std::endl;
}
