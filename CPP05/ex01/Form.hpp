//
// Created by Becki Carlee on 6/1/22.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string name;
	bool is_sign;
	int grade_to_sign;
	int grade_to_execute;
public:
	class GradeTooHighException : public std::runtime_error {
	public: GradeTooHighException(const std::string &error) : std::runtime_error
																	  (error) {};
	};

	class GradeTooLowException : public std::runtime_error {
	public: GradeTooLowException(const std::string &error) : std::runtime_error
																	 (error) {};
	};
	Form();
	Form(std::string name, int grade_to_sign, int grade_to_execute );
	~Form();
	Form(const Form &form);
	Form &operator=(const Form form);
	void beSigned(Bureaucrat &bureaucrat);
	int getGradeToSign();
	int getGradeToExecute();
	std::string getName();
};
std::ostream &operator<< (std::ostream &os, const Form &form);

#endif //CPP_FORM_HPP
