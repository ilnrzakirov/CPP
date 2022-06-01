#include "Bureaucrat.hpp"


class Bureaucrat {
protected:
	std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat()
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &Bureaucrat::operator=(const Bureaucrat bureaucrat);

};