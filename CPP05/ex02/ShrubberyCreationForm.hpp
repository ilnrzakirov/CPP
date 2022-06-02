//
// Created by Becki Carlee on 6/2/22.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"


class ShrubberyCreationForm : public Form{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm
						&shrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm
									 shrubberyCreationForm);
	void execute(Bureaucrat const & executor) const;

};


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
