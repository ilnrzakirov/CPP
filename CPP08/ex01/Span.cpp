//
// Created by Becki Carlee on 6/6/22.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int size) : size(size) {}

Span::Span(Span &span) {
	*this = span;
}

Span &Span::operator=(Span &span) {
	if (this != span){
		this->size = span.size;
		this->vector = span.vector;
	}
}

void Span::addNumber(int i) {
	if (vector.size() < this->size){
		vector.push_back(i);
	} else {
		throw std::runtime_error("Full container\n");
	}
}

void Span::addRange(std::vector<int>::iterator begin,
					std::vector<int>::iterator end) {
	if ((this->size - this->vector.size()) >= (end - begin)){
		vector.insert(vector.end(), begin, end);
	} else {
		throw std::runtime_error("Full container\n");
	}
}

int Span::longestSpan() {
	int min, max;
	if (this->vector.size() < 2){
		throw std::runtime_error("the container contains less than two "
								 "elements\n");
	} else {
		min = *std::min_element(vector.begin(), vector.end());
		max = *std::max_element(vector.begin(), vector.end());
		return std::abs(max - min);
	}
}

int Span::shortestSpan() {
	int res = INT_MAX;
	if (this->vector.size() < 2) {
		throw std::runtime_error("the container contains less than two "
								 "elements\n");
	}
	std::sort(vector.begin(), vector.end());
	for (int i = 0; i < vector.size() - 1; ++i) {
		int dis = std::abs(vector.at(i) - vector.at(i + 1));
		if (dis < res) {
			res = dis;
		}
	}
	return res;
}
