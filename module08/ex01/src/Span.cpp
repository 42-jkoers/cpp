
#include "Span.hpp"
#include <iostream>
#include <iterator>

Span::Span() : n(0) {}
Span::Span(unsigned int n) : n(n) {}
Span::Span(const Span& src) : n(src.n), array(src.array) {}

Span& Span::operator=(const Span& rhs) {
	n = rhs.n;
	array = rhs.array;
	return *this;
}

void Span::addNumber(int n) {
	if (array.size() < (unsigned int)n)
		array.push_back(n);
	else
		throw Span::Full();
	std::sort(array.begin(), array.end());
}

long Span::shortestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();
	int span = -1;
	int buffer;
	for (std::vector<int>::iterator i = array.begin(); i < array.end(); i++) {
		buffer = *i;
		i++;
		if ((span == -1 || ((*i - buffer) < span)) && *i != 0)
			span = *i - buffer;
	}
	return (unsigned long)span;
}

long Span::longestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();

	std::vector<int>::iterator min = std::min_element(array.begin(), array.end());
	std::vector<int>::iterator max = std::max_element(array.begin(), array.end());

	long					   rtn = *min - *max;
	return rtn < 0 ? -rtn : rtn;
}
