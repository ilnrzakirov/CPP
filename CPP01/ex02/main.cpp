#include <iostream>

int main(void){
	std::string string;
	string = "HI THIS IS BRAIN";
	std::string &stringREF = string;
	std::string *stringPTR = &string;
	std::cout << "string address: " << &string << "\n"
			<< "stringREF address: " << &stringREF << "\n"
			<< "stringPTR address: " << stringPTR << "\n"
			<< "value string: " << string << "\n"
			<< "value stringREF: " << stringREF << "\n"
			<< "valeu stringPTR: " << *stringPTR << "\n";
}
