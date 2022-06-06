//
// Created by Becki Carlee on 6/6/22.
//

#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : std::stack<T> {
public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &mutantStack) : std::stack<T>
		        (mutantStack) {};
		MutantStack const &operator=(MutantStack<T> &mutantStack){
			std::stack<T>::operator=(mutantStack);
			return (*this);
		}
};


#endif //CPP_MUTANTSTACK_HPP
