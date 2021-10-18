// #pragma once

// template <class T>class calc {
//   public:
// 	T multiply(T x, T y);
// 	T add(T x, T y);
// };
// template <class T>
// T calc<T>::multiply(T x, T y) {
// 	return x * y;
// }
// template <class T>
// T calc<T>::add(T x, T y) {
// 	return x + y;
// }

#pragma once

template <class T>
class Array {
  public:
	Array();
	Array(unsigned int n);
	Array& operator=(const Array& cp);
	Array(const Array& cp);
	virtual ~Array();

	unsigned int n;
	T*			 array;
};
