#include "./Contact.hpp"

Contact::Contact(std::string first_name,
				 std::string last_name,
				 std::string nickname,
				 std::string phone_number,
				 std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact::Contact()
{
	Contact("", "", "", "", "");
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName() const
{
	return this->first_name;
}

std::string	Contact::getLastName() const
{
	return this->last_name;
}

std::string	Contact::getNickName() const
{
	return this->nickname;
}

std::string	Contact::getDarkSecret() const
{
	return (this->darkest_secret);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

void	Contact::setFirstName(std::string word)
{
	this->first_name = word;
}

void    Contact::setLastName(std::string word)
{
	this->last_name = word;
}

void    Contact::setNickName(std::string word)
{
	this->nickname = word;
}

void		Contact::setPhoneNumber(std::string word)
{
	this->phone_number = word;
}

void		Contact::setDarkSecret(std::string word)
{
	this->darkest_secret = word;
}

void		Contact::setData(void)
{
	std::string word;

	std::cout << "Please Enter firstName:\n";
	std::getline(std::cin, word);
	this->setFirstName(word);

	std::cout << "Please Enter lastName:\n";
	std::getline(std::cin, word);
	this->setLastName(word);

	std::cout << "Please Enter nickName:\n";
	std::getline(std::cin, word);
	this->setNickName(word);

	std::cout << "Please Enter phoneNumber:\n";
	std::getline(std::cin, word);
	this->setPhoneNumber(word);

	std::cout << "Please Enter darkestSecret:\n";
	std::getline(std::cin, word);
	this->setDarkSecret(word);

	std::cout << "\nThank you, new contact is created!\n";
}

bool 	Contact::isEmpty() {
	if (this->getFirstName().empty()) {
		return (true);
	}
	if (this->getDarkSecret().empty()){
		return (true);
	}
	if (this->getLastName().empty()){
		return (true);
	}
	if (this->getNickName().empty()){
		return (true);
	}
	if (this->getPhoneNumber().empty()){
		return (true);
	}
	return (false);
}
