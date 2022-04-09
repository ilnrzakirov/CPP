#include "./Contact.hpp"
#include "./PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string cmd;

	PhoneBook.getMan();
	while(true)
	{
		std::cout <<"Enter the command:\n";
		if (!std::getline(std::cin, cmd))
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
			std:: cout << "Command not found" << std::endl;
		}
	}
	return (0);
}
