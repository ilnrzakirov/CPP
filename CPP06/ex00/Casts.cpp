//
// Created by Becki Carlee on 6/3/22.
//

#include "Casts.hpp"

Casts::Casts(): inputString(""), typeInputString(""), _char(0), _double(0.0),
_float(0.0F), _int(0) {}

Casts::Casts(std::string inputString): inputString(inputString),
typeInputString(""), _char(0), _double(0.0), _float(0.0F), _int(0) {}

Casts::~Casts() {}

Casts::Casts(const Casts &casts) {
	*this = casts;
}

std::string Casts::getInputString() {
	return this->inputString;
}

char Casts::getChar() {
	return this->_char;
}

double Casts::getDouble() {
	return this->_double;
}

float Casts::getFloat() {
	return this->_float;
}

int Casts::getInt() {
	return this->_int;
}

Casts &Casts::operator=(const Casts casts) {
	this->inputString = casts.getInputString();
	this->_int = casts.getInt();
	this->_float = casts.getFloat();
	this->_double = casts.getDouble();
	this->_char = casts.getChar();
	return (*this)
}


void Casts::getType() {

}