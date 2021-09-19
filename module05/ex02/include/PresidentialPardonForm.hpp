#pragma once
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
  public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
	virtual void			execute(const Bureaucrat& executor) const;

  private:
	PresidentialPardonForm();
};
