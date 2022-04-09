#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int number;
	void viewContacts() const;
	void NumContact() const;
	void viewFullInfo(Contact contact) const;

public:
	PhoneBook();
	void addContact();
	void getMan();
	void searchContact() const;
	~PhoneBook();
};

#endif
