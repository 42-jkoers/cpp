#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""),
			   isSigned(false),
			   gradeSign(GRADE_MIN),
			   gradeExecute(GRADE_MIN),
			   target("") {}

Form::Form(std::string name, long gradeSign, long gradeExecute, std::string target) : name(name),
																					  isSigned(false),
																					  gradeSign(gradeSign),
																					  gradeExecute(gradeExecute),
																					  target(target) {
	if (gradeSign < GRADE_MIN || gradeExecute < GRADE_MIN)
		throw Form::GradeTooHighException();
	if (gradeSign > GRADE_MAX || gradeExecute > GRADE_MAX)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& cp) : name(cp.getName()),
							 isSigned(cp.getIsSigned()),
							 gradeSign(cp.getGradeSign()),
							 gradeExecute(cp.getGradeExecute()),
							 target(cp.getTarget()) {
	*this = cp;
}

Form::~Form() {}

Form& Form::operator=(const Form& cp) {
	isSigned = cp.isSigned;
	return *this;
}

void Form::beSigned(const Bureaucrat& b) {
	if (isSigned)
		return;
	if (b.getGrade() > gradeSign)
		throw Form::GradeTooLowException();
	isSigned = true;
}

// getters and setters
std::string Form::getName() const { return name; }
long		Form::getGradeSign() const { return gradeSign; }
long		Form::getGradeExecute() const { return gradeExecute; }
bool		Form::getIsSigned() const { return isSigned; }
std::string Form::getTarget() const { return target; }

void		Form::setIsSigned(bool isSigned) { this->isSigned = isSigned; }
void		Form::setTarget(const std::string& target) { this->target = target; }

//

Form::GradeTooHighException::GradeTooHighException() {}
const char* Form::GradeTooHighException::what() const throw() {
	return "grade too high";
}

Form::GradeTooLowException::GradeTooLowException() {}
const char* Form::GradeTooLowException::what() const throw() {
	return "grade too low";
}

Form::FormExecuteException::FormExecuteException() {}
Form::FormExecuteException::FormExecuteException(std::string error) : m_error(error) {}
const char* Form::FormExecuteException::what() const throw() {
	return m_error.c_str();
}

void Form::validateExecution(const Bureaucrat& executor) const {
	if (!isSigned)
		throw Form::FormExecuteException("Form not signed");
	if (executor.getGrade() > gradeExecute)
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& f) {
	o << "form: " << f.getName()
	  << ", state: " << f.getIsSigned()
	  << ", grade to sign: " << f.getGradeSign()
	  << ", grade to execute: " << f.getGradeExecute();
	return o;
}
