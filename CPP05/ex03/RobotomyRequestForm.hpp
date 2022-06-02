//
// Created by Becki Carlee on 6/2/22.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm
						   &robotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm
								   robotomyRequestForm);
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
