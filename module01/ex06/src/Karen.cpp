#include "Karen.hpp"
#include <iostream>
#include <map>

void Karen::complain(std::string level) {
	// typedef void (Karen::*f)();
	// std::map<std::string, f> m;

	// m["DEBUG"] = &Karen::debug;
	// m["INFO"] = &Karen::info;
	// m["WARNING"] = &Karen::warning;
	// m["ERROR"] = &Karen::error;

	// if (m.count(level))
	// 	m[level]();
	// else
	// 	std::cout << "notfound" << std::endl;
	typedef void (Karen::*MemberFunctionPointer)();
	const static size_t				   N = 4;
	const static MemberFunctionPointer mfs[N] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	const static std::string		   levels[N] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < N; i++) {
		if (level == levels[i])
			(this->*mfs[i])();
	}
}

void Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning() {
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

// boilerplate
Karen::Karen() {}
Karen::Karen(const Karen& cp) { *this = cp; }
Karen& Karen::operator=(const Karen& cp) {
	(void)cp;
	return *this;
}
Karen::~Karen() {}
