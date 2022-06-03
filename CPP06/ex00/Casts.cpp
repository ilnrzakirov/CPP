//
// Created by Becki Carlee on 6/3/22.
//

#include "Casts.hpp"

Casts::Casts(): inputString(""), typeInputString(""), _char(0), _double(0.0),
_float(0.0F), _int(0) {}

Casts::Casts(std::string inputString): inputString(inputString),
typeInputString(""), _char(0), _double(0.0), _float(0.0F), _int(0) {
	this->getType();
	adapter();
}

Casts::~Casts() {}

Casts::Casts(const Casts &casts) {
	*this = casts;
}

std::string Casts::getInputString() const {
	return this->inputString;
}

char Casts::getChar() const {
	return this->_char;
}

std::string Casts::getTypeInputString() const {
	return this->typeInputString;
}

double Casts::getDouble()  const{
	return this->_double;
}

float Casts::getFloat() const {
	return this->_float;
}

int Casts::getInt() const {
	return this->_int;
}

Casts &Casts::operator=(const Casts casts) {
	this->inputString = casts.getInputString();
	this->_int = casts.getInt();
	this->_float = casts.getFloat();
	this->_double = casts.getDouble();
	this->_char = casts.getChar();
	return (*this);
}

void Casts::getType() {
	if (this->inputString.compare("-inf") == 0 || this->inputString.compare
	("+inf") == 0 || this->inputString.compare("nan") == 0) {
		this->typeInputString = "double";
	} else if (this->inputString.compare("-inff") == 0 || this->inputString
	.compare("+inff") == 0 || this->inputString.compare("nanf") == 0){
		this->typeInputString = "float";
	} else if (this->inputString.size() == 1){
		if (isdigit(this->inputString[0]) == 0){
			this->typeInputString = "char";
		} else {
			this->typeInputString = "int";
		}
	} else {
		bool isNumber = true;
		int i = 0;
		int sign = 0;
		int countDot = 0;
		while (i < this->inputString.size() - 1){
			if (isdigit(this->inputString[i]) == 0){
				if (this->inputString[i] == '-'){
					sign++;
					i++;
					continue;
				}
				if (this->inputString[i] != '.'){
					isNumber = false;
					break;
				}
				countDot++;
				if (countDot > 2) {
					isNumber = false;
					break;
				}
			}
			i++;
		}
		if (isNumber && (sign == 1 || sign == 0)){
			if (isdigit(this->inputString[i]) != 0 && countDot == 1){
				this->typeInputString = "double";
				return;
			} else if (isdigit(this->inputString[i]) != 0 && countDot == 0){
				this->typeInputString = "int";
				return;
			} else if (this->inputString[this->inputString.size() - 1] == 'f'
			&& (countDot == 2 || countDot == 1)){
				this->typeInputString = "float";
				return;
			}
		}
		throw DataException("Incorrect data\n");
	}
}

void Casts::setNumber(std::string setNum) {
	this->inputString = setNum;
}

void Casts::adapter() {
	if (this->typeInputString.compare("float") == 0 || this->typeInputString
	.compare("double") == 0){
		if (this->inputString[0] == '.'){
			this->setNumber("0" + this->inputString);
		}
		if (this->inputString[this->inputString.size() - 1] == '.'){
			this->setNumber(this->inputString + "0");
		}
		if (this->inputString[this->inputString.size() - 1] == 'f'){
			if (this->inputString[this->inputString.size() - 2] == '.'){
				std::string result = this->inputString;
				result[result.size() - 1] = '0';
				this->setNumber(result + "f");
			}
		}
	}
}