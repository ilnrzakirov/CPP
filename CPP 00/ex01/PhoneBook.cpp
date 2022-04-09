#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() //конструктор
{
	this->number = 0;
}

PhoneBook:: ~PhoneBook() //деструктор
{
}

void PhoneBook::add_contact(void) {

	if (this->number == 8) {
		this->contact[0].create_contact();
	}
	else
	{
		this->contact[this->number + 1] = contact;
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