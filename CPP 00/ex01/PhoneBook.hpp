#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <stdlib.h>
# include "./Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int number;
	void viewContacts() const;
	void NumContact() const;

public:
	PhoneBook();
	void add_contact();
	void getMan();
	void search();
	void exit();
	~PhoneBook();
};

#endif