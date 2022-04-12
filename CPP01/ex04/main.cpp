#include "Replace.hpp"


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: bad arguments\n";
		return (1);
	}
	Replace replace(av[1], av[2], av[3]);
	replace.replace();
	return(0);
}