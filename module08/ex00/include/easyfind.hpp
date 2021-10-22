#pragma once
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception {
  public:
	// NotFoundException() throw() {}
	// virtual ~notFoundException() throw() {}
	virtual const char* what() const throw() { return "Element not found"; };
};

template <typename T>
typename T::iterator easyfind(T& t, int i) {
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw NotFoundException();
	return it;
}
