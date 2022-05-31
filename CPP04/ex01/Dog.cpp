#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor is called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog destructor is called\n";
	delete this->brain;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy comstructor is called\n";
	*this = dog;
}

Dog &Dog::operator=(const Dog dog) {
	if (this != &dog){
		this->type = dog.type;
		if (dog.brain){
			delete this->brain;
			this->brain = new Brain(*dog.brain);
		}
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "the dog barks\n";
}

void Dog::setIdeas(std::string idea) {
	this->brain->setIdea(idea);
}

void Dog::showIdeas() {
	this->brain->showIdeas();
}
