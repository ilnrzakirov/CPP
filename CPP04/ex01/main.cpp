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
	animals[0]->showIdeas();
	return 0;
}
