#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iomanip>
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	void makeSound();
	Animal();
	virtual void ~Animal();
	Animal &operator=(const Animal animal);
	Animal(const Animal &animal);
	virtual void makeSound();
};
#endif
