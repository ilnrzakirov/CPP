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
		throw Bureaucrat::GradeTooHighException("The grade is too high\n");
	} else if (grade > 150) {
		throw  Bureaucrat::GradeTooLowException("The grade is to low\n");
	} else {
		this->grade = grade;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default bureaucrat destructor is called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name),
grade(bureaucrat.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat bureaucrat) {
	this->name = bureaucrat.getName();
	this->grade = bureaucrat.getGrade();
	return (*this);
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

void Bureaucrat::increment() {
	if (this->grade > 1){
		this->grade--;
	} else {
		throw Bureaucrat::GradeTooHighException("The grade is too high\n");
	}
}

void Bureaucrat::decrement() {
	if (this->grade < 150){
		this->grade++;
	} else {
		throw Bureaucrat::GradeTooLowException("The grade is to low\n");
	}
}

std::iostream *operator << (std::iostream &iostream, const Bureaucrat
&bureaucrat) {
	return iostream << bureaucrat.getName() << ", garde: " << bureaucrat
	.getGrade() << "\n";
}

#endif
