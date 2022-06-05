#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base *generate(void){
	std::srand(static_cast<unsigned int>(time(0)));
	int i = rand() % 3;

	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C()l
	}
	return NULL;
}

void identify(Base* p){
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a){
		std::cout << "A\n";
	} else if (b) {
		std::cout << "B\n";
	} else {
		std::cout << "C\n";
	}
}

void identify(Base& p) {

}

int main(void){

}