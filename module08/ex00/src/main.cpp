#include "easyfind.hpp"
#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

int main() {
	std::cout << "testing vectors" << std::endl
			  << std::endl;
	std::vector<int> vector1;
	for (int i = 0; i < 4; i++)
		vector1.push_back(i);

	try {
		for (int i = 0; true; i++) {
			std::cout << "searching " << i << std::endl;
			std::vector<int>::iterator ret = easyfind(vector1, i);
			std::cout << "found " << i << ", look: " << *ret << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
