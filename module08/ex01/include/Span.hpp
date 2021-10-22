#pragma once
#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class Span {
  public:
	class NotEnoughSpace : public std::exception {
		virtual const char* what() const throw() { return "Not enough space"; }
	};

	class FullException : public std::exception {
		virtual const char* what() const throw() { return "Span is full"; }
	};

	class TooShortToSpan : public std::exception {
		virtual const char* what() const throw() { return "Span is too short"; }
	};

	template <class Iterator>
	void addNumber(Iterator begin, Iterator end) {
		while (begin != end) {
			addNumber(*begin);
			begin++;
		}
	}

	Span(unsigned int n);
	Span(Span const& src);
	void addNumber(int n);
	long shortestSpan();
	long longestSpan();
	virtual ~Span(){};
	Span& operator=(const Span& rhs);

  private:
	Span();
	unsigned int	 n;
	std::vector<int> array;
};
