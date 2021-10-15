#include "numbers.hpp"
#include <cctype>
#include <cmath>
#include <iomanip>
#include <limits.h>
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

std::string T::printChar(char x) { return printChar(static_cast<double>(x)); }
std::string T::printChar(int x) { return printChar(static_cast<double>(x)); }
std::string T::printChar(float x) { return printChar(static_cast<double>(x)); }

std::string T::printChar(double x) {
	if (std::isnan(x) || std::isinf(x) || x < CHAR_MIN || x > CHAR_MAX || round(x) != x)
		return IMPOSSIBLE;
	if (!std::isprint(x))
		return "Non displayable";
	std::stringstream ss;
	ss << static_cast<char>(x);
	return ss.str();
}

// int

std::string T::printInt(char x) { return printInt(static_cast<int>(x)); }
std::string T::printInt(int x) { return printInt(static_cast<double>(x)); }
std::string T::printInt(float x) { return printInt(static_cast<double>(x)); }

std::string T::printInt(double x) {
	if (std::isnan(x) || round(x) != x || x < static_cast<double>(INT_MIN) || x > static_cast<double>(INT_MAX))
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
	std::stringstream ss;
	ss << static_cast<float>(x);
	float f = static_cast<float>(x);
	if ((!std::isnan(f) && !std::isinf(f)) && round(f) == f && (ss.str()).find("e") == std::string::npos)
		ss << ".0";
	ss << "f";
	return ss.str();
}

// double

std::string T::printDouble(char x) { return printDouble(static_cast<double>(x)); }
std::string T::printDouble(int x) { return printDouble(static_cast<double>(x)); }
std::string T::printDouble(float x) { return printDouble(static_cast<double>(x)); }

std::string T::printDouble(double x) {
	std::stringstream ss;
	ss << x;
	if ((!std::isnan(x) && !std::isinf(x)) && round(x) == x && (ss.str()).find("e") == std::string::npos)
		ss << ".0";
	return ss.str();
}

// printers

void T::printer(char x) {
	std::cout << "As char" << std::endl;
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(int x) {
	std::cout << "As int" << std::endl;
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(float x) {
	std::cout << "As float" << std::endl;
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
void T::printer(double x) {
	std::cout << "As double" << std::endl;
	std::cout << "char:   " << printChar(x) << "\n"
			  << "int:    " << printInt(x) << "\n"
			  << "float:  " << printFloat(x) << "\n"
			  << "double: " << printDouble(x) << "\n"
			  << std::ends;
}
