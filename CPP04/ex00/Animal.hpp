#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iomanip>
#include <iostream>

class Animal {
private:
	std::string type;
public:
	void makeSound();
	Animal();
	~Animal();
	Animal &operator=(const Animal animal);
	Animal(const Animal &animal);
};
#endif