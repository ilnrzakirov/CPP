//
// Created by Becki Carlee on 6/3/22.
//

#include "Casts.hpp"

Casts::Casts(): inputString("") {}

Casts::Casts(std::string inputString): inputString(inputString) {}

Casts::~Casts() {}

Casts::Casts(const Casts &casts) {
	*this = casts;
}

std::string Casts::getInputString() {
	return this->inputString;
}

Casts &Casts::operator=(const Casts casts) {
	this->inputString = casts.getInputString();
	return (*this)
}
