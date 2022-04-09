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

std::string	Contact::getFirst_name()
{
	return this->first_name;
}

std::string	Contact::getLast_name()
{
	return this->last_name;
}

std::string	Contact::getNickname()
{
	return this->nickname;
}

std::string	Contact::getDarkSecret()
{
	return (this->darkest_secret);
}

std::string	Contact::getPhoneNumber()
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

void		Contact::setDarkSercret(std::string word)
{
	this->darkest_secret = word;
}

void		Contact::setData(void)
{
	std::string word;

	std::cout << "Please Enter firstName:\n";
	std::getline(std::cin, &word);
	this->setFirstName(word);

	std::cout << "Please Enter LastName:\n";
	std::getline(std::cin, &word);
	this->setLastName(word);

	std::cout << "Please Enter nickName:\n";
	std::getline(std::cin, &word);
	this->setNickName(word);

	std::cout << "Please Enter phoneNumber:\n";
	std::getline(std::cin, &word);
	this->setPhoneNumber(word);

	std::cout << "Please Enter darkestSecret:\n";
	std::getline(std::cin, &word);
	this->setDarkSercret(word);

	std::cout << "\nThank you, new contact is created!\n";
}