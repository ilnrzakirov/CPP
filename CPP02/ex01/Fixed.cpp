#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called\n";
	this->value = number << this->bits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called\n";
	this->value = roundf(number * (1 << this->bits));
}

int Fixed::getRawBits() const {
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

std::ostream &operator << (std::ostream &out, const Fixed  &fix){
	out << fix.toFloat();
	return (out);
}

float Fixed::toFloat() const {
	return ((double)this->value / (double)(1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->bits);
}