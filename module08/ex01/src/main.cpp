#include "span.hpp"
#include <exception>
#include <iostream>

void printSpans(Span& s) {
	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s.longestSpan() << std::endl;
}

int main() {
	Span			 span1 = Span(1005);
	std::vector<int> vec;
	std::cout << "\n\n--> Test with an overflow with iterator" << std::endl;
	for (int i = 0; i < 3; i++)
		vec.push_back(i * -20);
	try {
		span1.addNumber(10);
		span1.addNumber(10);
		span1.addNumber(10);
		span1.addNumber(10);
		span1.addNumber(10);
		std::cout << "now try iterator" << std::endl;
		span1.addNumber(vec.begin(), vec.end());
		printSpans(span1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Span span2 = Span(5);
	std::cout << "\n\n--> Test with an overflow with addNumber" << std::endl;
	try {
		span2.addNumber(5);
		span2.addNumber(3);
		span2.addNumber(17);
		span2.addNumber(9);
		span2.addNumber(11);
		span2.addNumber(999999);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	printSpans(span2);
	std::cout << "\n\n--> Test with a short span object" << std::endl;
	Span tooShort = Span(1);
	tooShort.addNumber(42);

	try {
		std::cout << tooShort.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << tooShort.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\n--> subject test" << std::endl;
	Span spb = Span(5);
	spb.addNumber(5);
	spb.addNumber(3);
	spb.addNumber(17);
	spb.addNumber(9);
	spb.addNumber(11);
	std::cout << spb.shortestSpan() << std::endl;
	std::cout << spb.longestSpan() << std::endl;
}
