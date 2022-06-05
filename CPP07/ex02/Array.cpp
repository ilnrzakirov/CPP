//
// Created by Becki Carlee on 6/5/22.
//

#include "Array.hpp"

template<class T>
Array<T>::Array() : arr(0), _size(0) {}

template<class T>
Array<T>::Array(unsigned int n) {
	this->arr = new T[n];
	this->_size = n;
	for (int i = 0; i < _size; i++)
		this->arr[i] = 0;
}

template<class T>
Array<T>::~Array<T>() {
	delete []this->arr;
}

template <class T>
Array<T>::Array(const Array<T> &other) : _size(other._size) {
	this->arr = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->arr[i] = 0;
}
