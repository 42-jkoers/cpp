#pragma once
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
  public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& cp);

	virtual void		 execute(Bureaucrat const& executor) const;

  private:
	RobotomyRequestForm();
};
