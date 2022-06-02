//
// Created by Becki Carlee on 6/2/22.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP
#include "Form.hpp"

class Intern {
public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern intern);
	Form *makeForm(std::string formName, std::string formTarget);
};


#endif //CPP_INTERN_HPP
