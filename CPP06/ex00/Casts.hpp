//
// Created by Becki Carlee on 6/3/22.
//

#ifndef CPP_CASTS_HPP
#define CPP_CASTS_HPP

#include "iostream"
#include "string"
#include "iomanip"

class Casts {
private:
	std::string inputString;
	std::string typeInputString;
	char _char;
	int _int;
	float _float;
	double  _double;
public:
	Casts();
	Casts(std::string inputString);
	~Casts();
	Casts(const Casts &casts);
	Casts &operator=(const Casts casts);
	std::string getInputString() const;
	void getType();
	void castsIntToChar();
	void castsChar();
	void adapter();

	char getChar() const;
	std::string getTypeInputString() const;
	int getInt() const;
	float getFloat() const;
	double getDouble() const;
	void setNumber(std::string setNum);

	class DataException : public std::runtime_error {
	public: DataException(const std::string &error) : std::runtime_error
																(error) {};
	};
};


#endif //CPP_CASTS_HPP
