#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {
	std::cout << "Default bureaucrat constructor is called\n";
	this->name = "None";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	std::cout << "Bureaucrat constructor from " << name << " is called\n";
	this->name = name;
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException("The grade is too high");
	} else if (grade > 150) {
		throw  Bureaucrat::GradeTooLowException("The grade is to low\n");
	} else {
		this->grade = grade;
	}
}


#endif
