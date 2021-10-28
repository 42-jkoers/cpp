#include "span.hpp"
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

void Span::addNumber(int _n) {
	if (array.size() < (unsigned int)_n)
		array.push_back(n);
	else
		throw Span::FullException();
	std::sort(array.begin(), array.end());
}

long Span::shortestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();
	int span = -1;
	int i_copy;
	for (std::vector<int>::iterator i = array.begin(); i < array.end(); i++) {
		i_copy = *i;
		i++;
		if ((span == -1 || ((*i - i_copy) < span)) && *i)
			span = *i - i_copy;
	}
	return (unsigned long)span;
}

long Span::longestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();
	const std::vector<int>::iterator	min = std::min_element(array.begin(), array.end());
	const std::vector<int>::iterator	max = std::max_element(array.begin(), array.end());
	const long							rtn = *min - *max;
	return rtn < 0 ? -rtn : rtn;
}
