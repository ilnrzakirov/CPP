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
	std::string getInputString();
	void getType();
	void castsIntForDouble();
	void castsChar();

	char getChar();
	int getInt();
	float getFloat();
	double getDouble();
};


#endif //CPP_CASTS_HPP