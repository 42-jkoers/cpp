#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
	Bureaucrat			   president("president", 1);
	Bureaucrat			   senator("senator", 20);
	Bureaucrat			   pleb("pleb", 120);
	Bureaucrat			   excommunicatee("excommunicatee", 149);

	PresidentialPardonForm presidentialPardonForm("Pixies");
	RobotomyRequestForm	   robotomyRequestForm("Sonic Youth");
	ShrubberyCreationForm  shrubberyCreationForm("Beck");

	try {
		std::cout << "\nTrying to execute unsigned form" << std::endl;
		presidentialPardonForm.execute(president);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\nA pleb is trying to sign a presidentialPardonForm" << std::endl;
		presidentialPardonForm.beSigned(pleb);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nNow executing as president" << std::endl;
	presidentialPardonForm.beSigned(president);
	presidentialPardonForm.execute(president);

	std::cout << "\nImplemeting shrubberyCreationForm" << std::endl;
	shrubberyCreationForm.beSigned(president);
	shrubberyCreationForm.execute(senator);

	try {
		robotomyRequestForm.beSigned(senator);
		std::cout << "\nA excommunicatee is trying to execute a robotomyRequestForm" << std::endl;
		robotomyRequestForm.execute(excommunicatee);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nNow executing as president" << std::endl;
	robotomyRequestForm.execute(president);
	return 0;
}
