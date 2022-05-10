#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->value = 0;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return this->value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &object) {
	std::cout << "Copy constructor called\n";
	this->value = object.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &object) {
	std::cout <<"Copy assignment operator called\n";
	this->value = object.getRawBits();
	return *this;
}

void Fixed::setRaw(const int raw) {
	this->value = raw;
}