#include "numbers.hpp"
#include <cctype>
#include <cmath>
#include <iomanip>
#include <limits>

T::T() {}
T::T(const T& cp) { *this = cp; }
T& T::operator=(const T& cp) {
	(void)cp;
	return *this;
}
T::~T() {}

static void impossible() {
	std::cout << IMPOSSIBLE << std::ends;
}

// char

void T::printChar(char c) {
	std::cout << c << std::ends;
}

void T::printChar(int c) {
	if (c < CHAR_MIN || c > CHAR_MAX)
		return impossible();
	if (!std::isprint(c)) {
		std::cout << "Non displayable" << std::ends;
		return;
	}
	std::cout << static_cast<char>(c) << std::ends;
}

void T::printChar(float f) {
	printChar(static_cast<double>(f));
}

void T::printChar(double d) {
	if (d < CHAR_MIN || d > CHAR_MAX || std::round(d) != d)
		return impossible();
	std::cout << static_cast<double>(d) << std::ends;
}

// int

void T::printInt(char c) {
	std::cout << static_cast<int>(c) << std::ends;
}

void T::printInt(int c) {
	std::cout << static_cast<int>(c) << std::ends;
}

void T::printInt(float f) {
	printInt(static_cast<double>(f));
}

void T::printInt(double d) {
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		return impossible();
	std::cout << static_cast<int>(d) << std::ends;
}

// float

void T::printFloat(char c) {
	std::cout << static_cast<float>(c) << std::ends;
}

void T::printFloat(int c) {
	std::cout << static_cast<float>(c) << std::ends;
}

void T::printFloat(float f) {
	std::cout << static_cast<float>(f) << std::ends;
}

void T::printFloat(double d) {
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<double>::max())
		return impossible();
	std::cout << static_cast<float>(d) << std::ends;
}

// double

void T::printDouble(char c) {
	std::cout << static_cast<double>(c) << std::ends;
}

void T::printDouble(int c) {
	std::cout << static_cast<double>(c) << std::ends;
}

void T::printDouble(float f) {
	std::cout << static_cast<double>(f) << std::ends;
}

void T::printDouble(double d) {
	std::cout << static_cast<double>(d) << std::ends;
}

// printers

void T::printer(char x) {
	std::cout << "AS CHAR" << std::endl;
	std::cout << "char:   ";
	printChar(x);
	std::cout << "\nint:    ";
	printInt(x);
	std::cout << "\nfloat:  ";
	printFloat(x);
	std::cout << "f\ndouble: ";
	printDouble(x);
	std::cout << std::endl;
}
void T::printer(int x) {
	std::cout << "IAS INT" << std::endl;
	std::cout << "char:   ";
	printChar(x);
	std::cout << "\nint:    ";
	printInt(x);
	std::cout << "\nfloat:  ";
	printFloat(x);
	std::cout << "f\ndouble: ";
	printDouble(x);
	std::cout << std::endl;
}
void T::printer(float x) {
	std::cout << "InAS FLOAT" << std::endl;
	std::cout << "char:   ";
	printChar(x);
	std::cout << "\nint:    ";
	printInt(x);
	std::cout << "\nfloat:  ";
	printFloat(x);
	std::cout << "f\ndouble: ";
	printDouble(x);
	std::cout << std::endl;
}
void T::printer(double x) {
	std::cout << "InAS DOUBLE" << std::endl;
	std::cout << "char:   ";
	printChar(x);
	std::cout << "\nint:    ";
	printInt(x);
	std::cout << "\nfloat:  ";
	printFloat(x);
	std::cout << "f\ndouble: ";
	printDouble(x);
	std::cout << std::endl;
}
