//
// Created by Becki Carlee on 6/3/22.
//

#ifndef CPP_CASTS_HPP
#define CPP_CASTS_HPP

#include "iostream"
#include "string"

class Casts {
private:
	std::string inputString;
public:
	Casts();
	Casts(std::string inputString);
	~Casts();
	Casts(const Casts &casts);
	Casts &operator=(const Casts casts);
	std::string getInputString();
};


#endif //CPP_CASTS_HPP
