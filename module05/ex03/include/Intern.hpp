#pragma once
#include <iostream>

class Form;

class Intern {
  public:
	Intern();
	Intern(const Intern& src);
	~Intern();
	Intern& operator=(const Intern& rhs);

	Form*	makeForm(std::string form, std::string target);
};
