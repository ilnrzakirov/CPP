#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->number = 0;
}

PhoneBook:: ~PhoneBook()
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