#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iomanip>
#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal &operator=(const Animal animal);
	Animal(const Animal &animal);
	virtual void makeSound() const;
	std::string getType() const;
	virtual void setIdeas(std::string idea);
	virtual void showIdeas();
};
#endif
