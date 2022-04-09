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
		if (this->contact.isEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact = Contact();
		}
	}
	else
	{
		this->contact[this->number + 1].setData();
		if (this->contact.isEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact = Contact();
		}
	}
}

void PhoneBook::viewContacts() const
{
	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";
	for (int i = 0; i < this->number, i++)
	{
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->contacts[i].getFirstName().length() > 10)
		{
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
		}
		if (this->contacts[i].getLastName().length() > 10)
		{
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
		}
		if (this->contacts[i].getNickName().length() > 10)
		{
			std::cout << this->contacts[i].getNickName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getNickName() << "|";
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
	std::cout << "|" << "Darkest Secret:  |" << contact.getDarkSercret() << "|\n";
}

void	PhoneBook::NumContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << "Enter num contact:\n";
	(void)getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->number)
	{
		std::cout << "Contact not found :(\n";
		return ;
	}
	viewFullInfo(contacts[index - 1]);
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

