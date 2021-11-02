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
	if (array.size() + 1 > n)
		throw Span::FullException();
	else
		array.push_back(_n);
	std::sort(array.begin(), array.end());
}

long Span::shortestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();
	long shortest = -1;
	for (std::vector<int>::iterator i = array.begin(); i < array.end(); i++) {
		for (std::vector<int>::iterator j = array.begin(); j < array.end(); j++) {
			if (i == j)
				continue;
			long span = std::abs(*i - *j);
			if (shortest == -1 || span < shortest)
				shortest = span;
		}
	}
	return shortest;
}

long Span::longestSpan() {
	if (array.size() <= 1)
		throw Span::TooShortToSpan();
	const std::vector<int>::iterator min = std::min_element(array.begin(), array.end());
	const std::vector<int>::iterator max = std::max_element(array.begin(), array.end());
	return std::abs(*min - *max);
}
