#include "span.hpp"
#include <exception>
#include <iostream>

int main() {
	Span			 span1 = Span(5);
	std::vector<int> vec;
	std::cout << "  --> Test with an overflow with iterator" << std::endl;
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
		std::cout << span1.longestSpan() << " " << span1.shortestSpan() << " " << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Span span2 = Span(5);
	std::cout << "  --> Test with an overflow with addNumber" << std::endl;
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

	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;

	std::cout << "  --> Test with a short span object" << std::endl;
	Span shorty = Span(1);

	shorty.addNumber(42);

	try {
		std::cout << shorty.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << shorty.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "  --> subject test" << std::endl;
	Span spb = Span(5);
	spb.addNumber(5);
	spb.addNumber(3);
	spb.addNumber(17);
	spb.addNumber(9);
	spb.addNumber(11);
	std::cout << spb.shortestSpan() << std::endl;
	std::cout << spb.longestSpan() << std::endl;
}
