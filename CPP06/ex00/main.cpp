#include "Casts.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "You have not entered the incoming data\n";
		return (-1);
	}
	try {
		std::string inputString(av[1]);
		Casts casts = Casts(inputString);
		std::cout << casts.getTypeInputString() << "\n";
		std::cout << casts.getInputString() << "\n";
	} catch (std::exception &e) {
		std::cout << e.what();
	}
}