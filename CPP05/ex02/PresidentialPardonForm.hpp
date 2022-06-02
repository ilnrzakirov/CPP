//
// Created by Becki Carlee on 6/2/22.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form {
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm
	&presidentialPardonForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm
			presidentialPardonForm);
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
