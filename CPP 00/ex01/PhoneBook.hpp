#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int number;

public:
	void add_contact(Contact contact);
	void search();
	void exit();
};

#endif