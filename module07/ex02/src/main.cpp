#include "Array.hpp"
#include <algorithm>
#include <cstring>
#include <iterator>
template <class T>
Array<T>::Array() {
	array = new T[0];
}

template <class T>
Array<T>::Array(unsigned int n) : n(n) {
	array = new T[n];
}

template <class T>
Array<T>::Array(const Array& cp) {
	*this = cp;
	std::copy(std::begin(cp.array), std::end(cp.array), std::begin(array));
}

template <class T>
Array& Array<T>::operator=(const Array& cp) {
	n = cp.n;
	std::copy(std::begin(cp.array), std::end(cp.array), std::begin(array));
	return *this;
}

template <class T>
Array<T>::~Array() {}
