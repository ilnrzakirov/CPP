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
		throw GradeTooLowException("The grade is too low for signing\\n\"");
	this->grade_to_sign = grade_to_sign;
	this->grade_to_execute = grade_to_execute;
}

Form::Form(const Form &form) : name(form.name), is_sign(form.is_sign),
grade_to_execute(form.grade_to_execute), grade_to_sign(form.grade_to_sign) {}

Form &Form::operator=(const Form form) {
	this->name = form.name;
	this->grade_to_sign = form.grade_to_sign;
	this->grade_to_execute = form.grade_to_execute;
	this->is_sign = form.is_sign;
	return (*this);
}

std::ostream &operator << (std::ostream &os, const Form &form) {
	return os << "Form name: " << form.getName()
			  << "\nForm signed: " << form.getSigned()
			  << "\nMin grade to sign: " << form.getGradeToSign()
			  << "\nMin grade to execute: " << form.getGradeToExecute();
}