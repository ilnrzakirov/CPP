//
// Created by Becki Carlee on 6/2/22.
//

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern constructor is called\n";
}
Intern::~Intern() {
	std::coutn <, "Intern destructor is called\n";
}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern &Intern::operator=(const Intern intern) {
	(void*) intern;
	return (*this);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {

}


