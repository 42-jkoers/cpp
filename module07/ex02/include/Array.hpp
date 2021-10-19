#pragma once

#include <cstdlib>
#include <exception>
#include <iostream>
template <typename T>
class Array {
  public:
	Array<T>() : array(NULL), n(0) {}
	Array<T>(unsigned int n) : array(new T[n]), n(n) {}
	Array<T>(const Array<T>& src) : n(src.size()) {
		array = new T[src.size()];
		for (size_t i = 0; i < src.size(); i++)
			array[i] = src[i];
	}
	~Array<T>() { delete[] array; }

	size_t size() const { return n; }

	T&	   operator[](std::size_t index) const {
		if (index < 0 || index >= n)
			throw Array::OobException();
		return array[index];
	}

	Array<T>& operator=(const Array<T>& src) {
		if (n != 0)
			delete[] array;
		array = new T[src.size()];
		for (size_t i = 0; i < src.size(); i++)
			array[i] = src[i];
		n = src.size();
		return *this;
	}

	class OobException : public std::exception {
	  public:
		OobException() throw(){};
		virtual ~OobException() throw(){};
		virtual const char* what() const throw() { return "Index out of bounce"; };
	};

  private:
	T*			 array;
	const size_t n;
};
