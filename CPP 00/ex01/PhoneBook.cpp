#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() //конструктор
{
	this->number = 0;
}

PhoneBook:: ~PhoneBook() //деструктор
{
}

void PhoneBook::addContact(void) {

	if (this->number == 8) {
		this->contact[0].setData();
		if (this->contact[0].isEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact[0] = Contact();
		}
		this->number++;
	}
	else
	{
		this->contact[this->number + 1].setData();
		if (this->contact[this->number + 1].isEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact[this->number + 1] = Contact();
		}
		this->number++;
	}
}

void PhoneBook::viewContacts() const
{
	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";
	for (int i = 0; i < this->number; i++)
	{
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->contact[i].getFirstName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getFirstName() << "|";
		}
		if (this->contact[i].getLastName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getLastName() << "|";
		}
		if (this->contact[i].getNickName().length() > 10)
		{
			std::cout << this->contact[i].getNickName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getNickName() << "|";
		}
		std::cout << "\n";
	}
	std::cout << "+--------------------------------------+\n";
}

void    PhoneBook::getMan()
{
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                  AVAILABLE COMMANDS                   |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     ADD     -   Add a contact                         |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     SEARCH  -   Find a contact                        |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     EXIT    -   exit from PhoneBook                   |\n";
	std::cout << "|                                                       |\n";
	std::cout << "+-------------------------------------------------------+\n";
}

void	PhoneBook::viewFullInfo(Contact contact) const
{
	std::cout << "|" << "FirstName:       |" << contact.getFirstName() << "|\n";
	std::cout << "|" << "LastName:        |" << contact.getLastName() << "|\n";
	std::cout << "|" << "NickName:        |" << contact.getNickName() << "|\n";
	std::cout << "|" << "Phone Number:    |" << contact.getPhoneNumber() << "|\n";
	std::cout << "|" << "Darkest Secret:  |" << contact.getDarkSecret() << "|\n";
}

void	PhoneBook::NumContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << "Enter num contact:\n";
	getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->number)
	{
		std::cout << "Contact not found :(\n";
		return ;
	}
	viewFullInfo(contact[index - 1]);
}
void	PhoneBook::searchContact(void) const
{
	if (this->number == 0)
	{
		std::cout << "Sorry, PhoneBook is empty\n";
		return ;
	}
	viewContacts();
	NumContact();
}

