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
	}
	animals[0]->setIdeas("Hello");
	animals[0]->setIdeas("World");
	animals[0]->setIdeas("mmmmm");
	std::cout << animals[0]->getType() << "\n";
	animals[0]->showIdeas();
	std::cout << "before copying\n";
	std::cout << animals[7]->getType() << "\n";
	animals[7]->showIdeas();
	std::cout << "after copying\n";
	animals[7] = animals[0];
	std::cout << animals[7]->getType() << "\n";
	animals[7]->showIdeas();
	return 0;
}
