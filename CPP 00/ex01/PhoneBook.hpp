#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int number;

public:
	PhoneBook();
	void add_contact();
	void search();
	void exit();
	~PhoneBook();
};

#endif