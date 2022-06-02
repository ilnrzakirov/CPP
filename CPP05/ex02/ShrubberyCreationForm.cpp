//
// Created by Becki Carlee on 6/2/22.
//

#include "ShrubberyCreationForm.hpp"

#define ASCII_TREE \
"          &&& &&  & &&\n"\
"      && &\\/&\\|& ()|/ @, &&\n"\
"      &\\/(/&/&||/& /_/)_&/_&\n"\
"   &() &\\/&|()|/&\\/ '%' & ()\n"\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"\
"&&   && & &| &| /& & % ()& /&&\n"\
" ()&_---()&\\&\\|&&-&&--%---()~\n"\
"     &&     \\|||\n"\
"             |||\n"\
"             |||\n"\
"             |||\n"\
"       , -=-~  .-^- _\n"\
"		       `\n"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm",
													 145, 137
													 ) {
	std::cout << "ShrubberyCreationForm constructor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form
("ShrubberyCreationForm", 145, 137), target(target) {
	std::cout << "ShrubberyCreationForm constructor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &shrubberyCreationForm) : Form
		("ShrubberyCreationForm", 145, 137) {
	this->target = shrubberyCreationForm.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm shrubberyCreationForm) {
	this->target = shrubberyCreationForm.target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned().size() == 2) {
		std::cout << "The form is not signed\n";
		return;
	} else if (executor.getGrade() <= this->getGradeToExecute()) {
		try {
			std::ofstream out;
			out.open(this->target + "_shrubbery");
			if (out.is_open())
				out << ASCII_TREE;
			else {
				std::cout << "File not open\n";
			}
		} catch (std::exception &e){
			std::cout << "File not open\n";
		}
	}
}

