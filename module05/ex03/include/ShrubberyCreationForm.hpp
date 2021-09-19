#pragma once
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form {
  public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
	virtual void		   execute(const Bureaucrat& executor) const;

  private:
	ShrubberyCreationForm();
};
