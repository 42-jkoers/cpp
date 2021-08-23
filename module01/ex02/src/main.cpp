#include <iostream>
#include <string>

int main() {
	std::string*  stringPTR = new std::string("HI THIS IS BRAIN");
	std::string*& stringREF = stringPTR;

	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << stringREF << std::endl;

	std::cout << "  stringPTR value: " << *stringPTR << std::endl;
	std::cout << "  stringREF value: " << *stringREF << std::endl;

	delete stringPTR;
	return 0;
}
