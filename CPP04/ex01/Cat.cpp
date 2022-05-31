#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor is called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat destructor is called\n";
	delete this->brain;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor is called\n";
	*this = cat;
}

Cat &Cat::operator=(const Cat cat) {
	if (*this != &cat){
		this->type = cat.type;
		if (cat.brain) {
			delete this->brain;
			this->brain = new Brain(*cat.brain);
		}
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "The cat purrs\n";
}

void Cat::setIdeas(std::string idea) {
	this->brain->setIdea(idea);
}

void Cat::showIdeas() {
	this->brain->showIdeas();
}