//
// Created by Becki Carlee on 6/1/22.
//

#include "Form.hpp"

Form::Form() : name("Form"), is_sign(false), grade_to_execute(1),
grade_to_sign(1) {}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) {
	this->name = name;
	this->is_sign = false;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw GradeTooHighException("The grade is too high for signing\n");
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw GradeTooLowException("The grade is too low for signing\n");
	this->grade_to_sign = grade_to_sign;
	this->grade_to_execute = grade_to_execute;
}

int Form::getGradeToExecute() const {
	return this->grade_to_execute;
}

int Form::getGradeToSign() const {
	return this->grade_to_sign;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (this->grade_to_sign > bureaucrat.getGrade()) {
		std::cout << "Form is signed\n";
		this->is_sign = true;
	}
	else {
		throw GradeTooLowException("The grade is too low for signing\n");
	}
}

std::string Form::getName() const{
	return this->name;
}

std::string Form::getSigned() const {
	if (this->is_sign)
		return ("Yes");
	return ("No");
}

Form::~Form() {
	std::cout << "Default destructor is called\n";
}

void Form::execute(const Bureaucrat &executor) const {}