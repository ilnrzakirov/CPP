#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP


#include <iostream>
#include <string>

template <class T>
void iter(T *array, size_t len, void (* func)(T&)){
	for (int i = 0; i < len; i++){
		func(array[i]);
	}
}


#endif