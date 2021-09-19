#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src) {
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& cp) {
	setIsSigned(cp.getIsSigned());
	setTarget(cp.getTarget());
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	validateExecution(executor);
	if ((rand() % 2) == 1) {
		std::cout << "*Drrrrilling noises*" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	} else
		std::cout << "it's a failure" << std::endl;
}
