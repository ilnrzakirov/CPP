#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream> // библиотека вводы вывода
# include <string>
# include <stdlib.h>

class	Contact { //описание класса Contact

private:
	std::string	first_name; // std - пространство имен STD, string - класс
	// с методами для работы со строками,  first_name -объект класса string
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	Contact(std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string darkest_secret);
	void	setDarkSecret(std::string word);
	void	setPhoneNumber(std::string word);
	void	setFirstName(std::string word);
	void	setLastName(std::string word);
	void	setNickName(std::string word);
	void 	setData(void);
	std::string getFirst_name();
	std::string getLast_name();
	std::string	getNickName();
	std::string getDarkSecret();
	std::string	getPhoneNumber();
	~Contact(); // Деструктор
};

#endif