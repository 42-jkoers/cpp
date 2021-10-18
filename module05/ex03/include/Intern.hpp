#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Form;

class Intern {
  public:
	Intern();
	Intern(const Intern& src);
	~Intern();
	Intern& operator=(const Intern& rhs);
	Form*	makeForm(std::string form, std::string target);

  private:
	static Form* makeShrubberyCreationForm(std::string target) { return new ShrubberyCreationForm(target); }
	static Form* makeRobotomyRequestForm(std::string target) { return new RobotomyRequestForm(target); }
	static Form* makePresidentialPardonForm(std::string target) { return new PresidentialPardonForm(target); }
};
