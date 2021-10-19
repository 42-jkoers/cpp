#include "main.hpp"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <typeinfo>

Base* generate() {
	double r = (double)rand() / RAND_MAX;

	if (r <= 1.0 / 3.0)
		return new A();
	else if (r <= 2.0 / 3.0)
		return new B();
	else
		return new C();
}

void identify(Base* p) {
	if (!p) {
		std::cout << "NULL!" << std::endl;
		return;
	}
	try {
		A& x = dynamic_cast<A&>(*p);
		(void)x;
		std::cout << "A" << std::endl;
	} catch (const std::exception& e) {
	}
	try {
		B& x = dynamic_cast<B&>(*p);
		(void)x;
		std::cout << "B" << std::endl;
	} catch (const std::exception& e) {
	}
	try {
		C& x = dynamic_cast<C&>(*p);
		(void)x;
		std::cout << "C" << std::endl;
	} catch (const std::exception& e) {
	}
}

void identify(Base& p) {
	try {
		A& x = dynamic_cast<A&>(p);
		(void)x;
		std::cout << "A" << std::endl;
	} catch (const std::exception& e) {
	}
	try {
		B& x = dynamic_cast<B&>(p);
		(void)x;
		std::cout << "B" << std::endl;
	} catch (const std::exception& e) {
	}
	try {
		C& x = dynamic_cast<C&>(p);
		(void)x;
		std::cout << "C" << std::endl;
	} catch (const std::exception& e) {
	}
}

int main() {
	srand(time(NULL)); // set new seed

	for (size_t i = 0; i < 4; i++) {
		Base* tmp = generate();
		identify(tmp);
		delete tmp;
	}
	std::cout << std::endl;
	for (size_t i = 0; i < 4; i++) {
		Base* tmp = generate();
		identify(*tmp);
		delete tmp;
	}
	return 0;
}
