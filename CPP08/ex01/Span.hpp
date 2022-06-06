//
// Created by Becki Carlee on 6/6/22.
//

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

#include <iostream>
#include <string>
#include <vector>


class Span {
private:
	unsigned int size;
	std::vector<int> vector;
public:
	Span();
	~Span();
	Span(unsigned int size);
	Span(Span &span);
	Span &operator=(Span &span);

	void addNumber(int i);
	void shortestSpan();
	void longestSpan();
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);


};


#endif //CPP_SPAN_HPP
