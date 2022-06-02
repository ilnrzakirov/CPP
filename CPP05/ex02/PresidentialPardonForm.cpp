//
// Created by Becki Carlee on 6/2/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form
("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form
("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &presidentialPardonForm): Form
		("PresidentialPardonForm", 25, 5), target(presidentialPardonForm
		.target) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned().size() == 2){
		std::cout << "The form is not signed\n";
		return;
	} else if (executor.getGrade() <= this->getGradeToExecute()){
		std::cout << executor.getName() << " executed " << this->getName() <<
		std::endl;
	} else {
		std:: cout << "The grade of bureaucrat is low to complete the form\n";
	}
}
