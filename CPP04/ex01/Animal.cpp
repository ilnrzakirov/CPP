#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor is called\n";
	this->type = "Animal";
}

Animal &Animal::operator=(const Animal animal) {
	std::cout << "Copy assignment operator called\n";
	this->type = animal.type;
	return (*this);
}

Animal::Animal(const Animal &animal) {
	std::cout << "Copy constructor is called\n";
	*this = animal;
}

Animal::~Animal() {
	std::cout << "Animal destructor is called\n";
}

void Animal::makeSound() const{
	std::cout << "The animal makes a sound\n";
}

std::string Animal::getType() const{
	return this->type;
}
