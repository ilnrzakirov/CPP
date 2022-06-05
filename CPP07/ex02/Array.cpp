//
// Created by Becki Carlee on 6/5/22.
//

#include "Array.hpp"

template<class T>
Array<T>::Array() : arr(0), size(0) {}

template<class T>
Array<T>::Array(unsigned int n) {
	this->arr = new T[n];
	this->size = n;
}

template<class T>
Array<T>::~Array<T>() {
	delete []this->arr;
}


