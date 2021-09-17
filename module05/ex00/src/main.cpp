#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat daftPunk("DaftPunk", 3);

	try {
		while (true) {
			daftPunk.incrementGrade();
			std::cout << daftPunk << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << "Error when incrementing grade: " << e.what() << std::endl;
	}

	std::cout << "\nCreating a bureaucrat with invalid grade" << std::endl;
	try {
		Bureaucrat theCure("TheCure", 500);
	} catch (std::exception& e) {
		std::cout << "Error when creating Bureaucrat: " << e.what() << std::endl;
	}
	return 0;
}
