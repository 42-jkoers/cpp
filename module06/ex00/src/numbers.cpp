#include "numbers.hpp"
#include <cctype>
#include <cmath>
#include <iomanip>
#include <limits>
#include <sstream>

T::T() {}
T::T(const T& cp) { *this = cp; }
T& T::operator=(const T& cp) {
	(void)cp;
	return *this;
}
T::~T() {}

// char

std::string T::printChar(char x) { return printChar(static_cast<int>(x)); }

std::string T::printChar(int x) {
	if (x < CHAR_MIN || x > CHAR_MAX)
		return IMPOSSIBLE;
	if (!std::isprint(x)) {
		return "Non displayable";
	}
	std::stringstream ss;
	ss << static_cast<char>(x);
	return ss.str();
}

std::string T::printChar(float x) { return printChar(static_cast<double>(x)); }

std::string T::printChar(double x) {
	if (x < CHAR_MIN || x > CHAR_MAX || std::round(x) != x)
		return IMPOSSIBLE;
	std::stringstream ss;
	ss << static_cast<double>(x);
	return ss.str();
}

// int

std::string T::printInt(char x) { return printInt(static_cast<int>(x)); }

std::string T::printInt(int x) {
	std::stringstream ss;
	ss << static_cast<int>(x);
	return ss.str();
}

std::string T::printInt(float x) { return printInt(static_cast<double>(x)); }

std::string T::printInt(double x) {
	if (x < static_cast<double>(INT_MIN) || x > static_cast<double>(INT_MAX))
		return IMPOSSIBLE;
	std::stringstream ss;
	ss << static_cast<int>(x);
	return ss.str();
}

// float

std::string T::printFloat(char x) { return printFloat(static_cast<double>(x)); }
std::string T::printFloat(int x) { return printFloat(static_cast<double>(x)); }
std::string T::printFloat(float x) { return printFloat(static_cast<double>(x)); }

std::string T::printFloat(double x) {
	if (x < std::numeric_limits<float>::min() || x > std::numeric_limits<double>::max())
		return IMPOSSIBLE;
	std::stringstream ss;
	ss << static_cast<float>(x);
	if (std::round(x) == x)
		ss << ".0";
	return ss.str();
}

// double

std::string T::printDouble(char x) { return printDouble(static_cast<double>(x)); }
std::string T::printDouble(int x) { return printDouble(static_cast<double>(x)); }
std::string T::printDouble(float x) { return printDouble(static_cast<double>(x)); }

std::string T::printDouble(double x) {
	std::stringstream ss;
	ss << static_cast<double>(x);
	if (std::round(x) == x)
		ss << ".0";
	return ss.str();
}

// printers

void T::printer(char x) {
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "f\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(int x) {
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "f\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(float x) {
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "f\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(double x) {
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "f\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
