#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>

template <class T>
int easyfind(T &t, int i){
	T::itertor itertor;
	itertor = std::find(t.begin(), t.end(), i);

	if (itertor != te.end){
		return *itertor;
	} else {
		throw std::runtime_error("Not found");
	}
}

#endif
