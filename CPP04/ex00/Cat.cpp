#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor is called\n";
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Cat destructor is called\n";
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor is called\n";
	*this = cat;
}

Cat &Cat::operator=(const Cat cat) {
	std::cout << "Copy assignment operator called\n";
	this->type = cat.type;
	return (*this);
}

void Cat::makeSound() {
	std::cout << "The cat purrs\n";
}