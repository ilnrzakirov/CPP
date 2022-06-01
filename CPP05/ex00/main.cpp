#include "Bureaucrat.hpp"

int main(void){
	try
	{
		Bureaucrat bureaucrat = Bureaucrat();
		Bureaucrat bureaucrat1 = Bureaucrat("Bob", 20);
		Bureaucrat bad = Bureaucrat("Halk", 0);
	}
	catch (std::exception &e) {
		std::cout <<"Error: "  << e.what() << "\n";
	}
	try{
		Bureaucrat newBur = Bureaucrat("BBB", 155);
	} catch (std::exception &e) {
		std::cout <<"Error: "  << e.what() << "\n";
	}
	return (0);
}