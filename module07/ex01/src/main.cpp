#include "iter.hpp"
#include <limits>
#include <math.h>

template <typename T>
void iter(T* address, size_t len, void (*fn)(T)) {
	for (size_t i = 0; i < len; i++) {
		fn(address[i]);
	}
}

void charIteratorPrinter(char c) {
	std::cout << c << " " << std::ends;
}

void doubleIteratorPrinter(double d) {
	std::cout << d << " " << std::ends;
}

int main() {
	char c[] = {'x', '2', 65, 'J'};
	iter(c, sizeof(c) / sizeof(c[0]), charIteratorPrinter);
	std::cout << std::endl;

	double d[] = {1e-8, 420.0, INFINITY, std::numeric_limits<double>::quiet_NaN()};
	iter(d, sizeof(d) / sizeof(d[0]), doubleIteratorPrinter);
	std::cout << std::endl;
	return 0;
}
