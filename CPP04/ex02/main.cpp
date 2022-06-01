#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	Animal *animals[10];
	for (int i = 0; i < 10; i++){
		if (i < 5){
			animals[i] = new Dog();
		}
		else {
			animals[i] = new Cat();
		}
		animals[i]->makeSound();
	}
	animals[0]->setIdeas("Hello");
	animals[0]->setIdeas("World");
	animals[0]->setIdeas("mmmmm\n");
	std::cout << animals[0]->getType() << "\n";
	animals[0]->showIdeas();
	std::cout << "before copying\n";
	std::cout << animals[9]->getType() << "\n";
	animals[9]->showIdeas();
	delete animals[9];
	std::cout << "after copying\n";
	animals[9] = animals[0];
	std::cout << animals[9]->getType() << "\n";
	animals[9]->showIdeas();
	for (int i = 0; i < 9; i++)
		delete animals[i];
//	Animal animal = new Animal();
	return 0;
}
