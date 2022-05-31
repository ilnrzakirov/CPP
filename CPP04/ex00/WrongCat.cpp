#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default WrongCat constructor called\n";
	type = "WrongCat";
}


WrongCat::WrongCat( WrongCat const & copy) {
	std::cout << "Copy constructor called\n";
	*this = copy;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor " << type << " called\n";
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	std::cout << "WrongCat assignation operator called\n";
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound( void ) const{
	std::cout << "The cat purrs\n";
}
