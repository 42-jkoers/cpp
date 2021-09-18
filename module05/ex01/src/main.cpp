#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	Bureaucrat caravanPalace("CaravanPalace", 64);
	Form	   halsey("Halsey", 1, 101);
	try {
		halsey.beSigned(caravanPalace);
	} catch (const std::exception& e) {
		std::cout << "failed with: " << e.what() << std::endl;
	}

	Bureaucrat jet("Jet", 64);
	Form	   ofenbach("Ofenbach", 100, 1);
	jet.signForm(ofenbach);

	return 0;
}
