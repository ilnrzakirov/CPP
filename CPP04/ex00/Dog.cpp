#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor is called\n";
}

Dog::~Dog(){
	std::cout << "Dog destructor is called\n";
}

Dog::Dog(const Dog &dog) {
	if (this != dog)
		*this = dog;
}

Dog &Dog::operator=(const Dog dog) {
	if (this != dog){
		this->type = dog.type;
	}
	return (*this);
}