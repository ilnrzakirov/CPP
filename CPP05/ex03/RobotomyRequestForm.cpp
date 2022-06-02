//
// Created by Becki Carlee on 6/2/22.
//

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72,
												 45) {
	std::cout << "RobotomyRequestForm constructor is caaled\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form
("RobotomyRequestForm", 72, 45), target(target) {
	std::cout << "RobotomyRequestForm constructor is caaled\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor is called\n";
}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm &robotomyRequestForm): Form
		("RobotomyRequestForm", 72, 45), target(robotomyRequestForm.target) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm robotomyRequestForm)
{
	this->target = robotomyRequestForm.target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned().size() == 2){
		throw NotSignException("The form is not signed\n");
	} else if (executor.getGrade() <= this->getGradeToExecute()){
		std::cout << "drilling noises... ";
		std::srand(time(0));
		if (std::rand() % 2 == 0) {
			std:: cout << this->target << " has been robotomized "
										  "successfully\n";
		}
		else{
			std::cout << "The robotomy failed.\n";
		}
	} else {
		throw GradeTooLowException("The grade is too low for signing\n");
	}
}