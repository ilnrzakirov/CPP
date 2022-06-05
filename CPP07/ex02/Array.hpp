//
// Created by Becki Carlee on 6/5/22.
//

#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array {
private:
	T *arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array &other);
	Array &operator=(const Array &other);
	T &operator[](unsigned int index);
	const unsigned int size() const;
};


#endif //CPP_ARRAY_HPP
