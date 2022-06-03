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

Casts &Casts::operator=(const Casts casts) {
	this->inputString = casts.getInputString();
	this->_int = casts._int;
	this->_float = casts._float;
	this->_double = casts._double;
	this->_char = casts._char;
	return (*this)
}
