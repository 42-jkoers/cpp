#include <iostream>

int main(int argc, char** argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < argc; i++) {
		for (char* s = argv[i]; *s; s++) {
			char upper = std::toupper(*s);
			std::cout << upper;
		}
	}
	std::cout << std::endl;
	return 0;
}
