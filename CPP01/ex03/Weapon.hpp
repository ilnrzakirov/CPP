#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon(std::string type);
	std::string const &getType (void);
	void set_type(std::string type);
};

#endif
