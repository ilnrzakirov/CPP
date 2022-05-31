#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include "Animal.hpp"

class Brain {
private:
	std::string ideas[100];
	int index;
public:
	void showIdeas();
	Brain();
	~Brain();
	Brain(Brain &brain);
	Brain &operator=(const Brain brain);
	void setIdea(std::string idea);
};


#endif
