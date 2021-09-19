#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src) {
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cp) {
	setIsSigned(cp.getIsSigned());
	setTarget(cp.getTarget());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	validateExecution(executor);

	const std::string filepath = "./" + getTarget() + "_shrubbery";
	std::ofstream	  file;
	file.open(filepath.c_str());
	file << "    *\n   /_\\\n  /_\\_\\\n /_/_/_\\\n   [_]\n";
	file.close();
	std::cout << filepath << " was created successfully" << std::endl;
}
