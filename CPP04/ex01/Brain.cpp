#include "Brain.hpp"

void Brain::showIdeas(){
	int flag = 0;
	for (int i = 0; i < 100; i++){
		if (this->ideas[i].size() != 0) {
			std::cout << this->ideas[i] << "\n";
			flag = 1;
		}
	}
	if (flag == 0){
		std::cout << "no ideas\n";
	}
}

Brain::Brain() {
	std::cout << "Brain constructor is called\n";
	for (int i = 0; i < 100; i++){
		this->ideas[i] = "";
	}
	this->index = 0;
}

Brain::~Brain() {
	std::cout << "Brain destructor is called\n";
}

Brain &Brain::operator=(const Brain brain) {
	std::cout << "Brain copy assignment operator called\n";
	if (this != &brain){
		for (int i=0; i < 100; i++){
			this->ideas[i] = brain.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(Brain &brain) {
	std::cout << "Brain copy constructor is called\n";
	*this = brain;
}

void Brain::setIdea(std::string idea) {
	if (this->index == 100){
		this->index = 0;
	}
	this->ideas[this->index] = idea;
	this->index++;
}



