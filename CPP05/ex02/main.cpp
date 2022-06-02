#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	try {
		Bureaucrat bro = Bureaucrat("Bru", 140);
		Bureaucrat bro1 = Bureaucrat("Bru1", 11);
		PresidentialPardonForm pres = PresidentialPardonForm("lol");
		pres.beSigned(bro1);
		pres.execute(bro1);
		pres.execute(bro);
	}catch (std::exception &e) {
		std::cout <<"Error: "  << e.what() << "\n";
	}
	return (0);
}