#include "Bureaucrat.hpp"
#include "Intern.hpp"
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

	std::cout << "\nNow executing as president" << std::endl;
	presidentialPardonForm.beSigned(president);
	presidentialPardonForm.execute(president);

	std::string forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		"invalid form",
	};

	Intern intern;
	for (size_t i = 0; i < 4; i++) {
		Form* form = intern.makeForm(forms[i], "test target");
		if (form) {
			try {
				form->beSigned(president);
				form->execute(president);
			} catch (const std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
			delete form;
		} else {
			std::cout << "Form not found" << std::endl;
		}
	}

	return 0;
}
