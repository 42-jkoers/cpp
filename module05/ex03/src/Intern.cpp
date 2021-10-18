#include "Intern.hpp"

#define N_FORMS 3

Intern::Intern() {}

Intern::Intern(const Intern& src) {
	*this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& cp) {
	(void)cp;
	return *this;
}

Form* Intern::makeForm(std::string form, std::string target) {

	Form* (*makers[N_FORMS])(std::string target) =
		{makeShrubberyCreationForm, makeRobotomyRequestForm, makePresidentialPardonForm};
	const static std::string forms[N_FORMS] =
		{"shrubbery creation", "robotomy request", "presidential pardon"};

	for (size_t i = 0; i < N_FORMS; i++) {
		if (forms[i] == form) {
			std::cout << "Intern creates " << form << std::endl;
			return (makers[i])(target);
		}
	}
	std::cout << "Cannot make form: invalid name" << std::endl;
	return NULL;
}
