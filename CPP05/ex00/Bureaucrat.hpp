//
// Created by Becki Carlee on 6/1/22.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>


class Bureaucrat {
private:
	std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat bureaucrat);
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();

	class GradeTooHighException : std::runtime_error {
	public: GradeTooHighException(std::string error) : std::runtime_error
	(error) {};
	};

	class GradeTooLowException : std::runtime_error {
	public: GradeTooLowException(std::string error) : std::runtime_error
	(error) {};
	};
};
std::ostream &operator<< (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
