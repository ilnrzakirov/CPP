//
// Created by Becki Carlee on 6/2/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form
("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm constructor is called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form
("PresidentialPardonForm", 25, 5), target(target) {
	std::cout << "PresidentialPardonForm constructor is called\n";
}

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
		std::cout << this->target << " has been pardoned by Zaphod "
									 "Beeblebrox\n";
	} else {
		std:: cout << "The grade of bureaucrat is low to complete the form\n";
	}
}
