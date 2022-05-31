#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor is called\n";
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Dog destructor is called\n";
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy comstructor is called\n";
	*this = dog;
}

Dog &Dog::operator=(const Dog dog) {
	std::cout << "Copy assignment operator called\n";
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound() {
	std::cout << "the dog barks\n";
}
