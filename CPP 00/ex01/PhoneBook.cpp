#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->number = 0;
}

PhoneBook:: ~PhoneBook()
{
}

void PhoneBook::add_contact(Contact contact) {
	if (this->number == 8) {
		this->contact[0] = contact;
	}
	else
	{
		this->contact[this->number + 1] = contact;
	}
}