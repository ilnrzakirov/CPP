#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void){
	try {
		Bureaucrat bro = Bureaucrat("Bru", 140);
		Bureaucrat bro1 = Bureaucrat("Bru1", 4);
		PresidentialPardonForm pres = PresidentialPardonForm("lol");
		pres.beSigned(bro1);
		pres.execute(bro1);
		pres.execute(bro);
	}catch (std::exception &e) {
		std::cout <<"Error: "  << e.what() << "\n";
	}
	std::cout << std::endl;
	try {
		Bureaucrat tro = Bureaucrat("Tro", 80);
		Bureaucrat tri = Bureaucrat("Tri", 20);
		RobotomyRequestForm robotomyRequestForm = RobotomyRequestForm("he");
		robotomyRequestForm.beSigned(tri);
//		robotomyRequestForm.beSigned(tro);
		robotomyRequestForm.execute(tro);
		robotomyRequestForm.execute(tri);
	}catch (std::exception &e) {
		std::cout <<"Error: "  << e.what();
	}
	return (0);
}