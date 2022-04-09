#include "./Contact.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string cmd;

	PhoneBook.getMan();
	while(true)
	{
		std::cout <<"Enter the command:\n";
		if (!(void)std::getline(std::cin, cmd))
		{
			std::cout << "GoodBye!\n";
			return (1);
		}
		else if (cmd == "EXIT")
		{
			std::cout << "GoodBye!\n";
			return (0);
		}
		else if (cmd == "ADD")
		{
			PhoneBook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			PhoneBook.searchContact();
		}
		else
		{
			std:: cout << "Sorry, comamnd not found :(" << std::endl;
		}
	}
	return (0);
}