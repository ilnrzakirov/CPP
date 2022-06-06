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
