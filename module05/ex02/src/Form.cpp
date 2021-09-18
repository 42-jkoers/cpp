#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""),
			   is_signed(false),
			   gradeSign(GRADE_MIN),
			   gradeExecute(GRADE_MIN) {}

Form::Form(std::string name, long gradeSign, long gradeExecute) : name(name),
																  is_signed(false),
																  gradeSign(gradeSign),
																  gradeExecute(gradeExecute) {
	if (gradeSign < GRADE_MIN || gradeExecute < GRADE_MIN)
		throw Form::GradeTooHighException();
	if (gradeSign > GRADE_MAX || gradeExecute > GRADE_MAX)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& cp) : name(cp.getName()),
							 is_signed(cp.isSigned()),
							 gradeSign(cp.getGradeSign()),
							 gradeExecute(cp.getGradeExecute()) {
	*this = cp;
}

Form::~Form() {}

Form& Form::operator=(const Form& cp) {
	is_signed = cp.is_signed;
	return *this;
}

std::string Form::getName() const {
	return name;
}

long Form::getGradeSign() const {
	return gradeSign;
}

long Form::getGradeExecute() const {
	return gradeExecute;
}

bool Form::isSigned() const {
	return is_signed;
}

void Form::beSigned(const Bureaucrat& b) {
	if (is_signed)
		return;
	if (b.getGrade() > gradeSign)
		throw Form::GradeTooLowException();
	is_signed = true;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooLowException::GradeTooLowException() {}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade too low";
}

std::ostream& operator<<(std::ostream& o, const Form& f) {
	o << "form: " << f.getName()
	  << ", state: " << f.isSigned()
	  << ", grade to sign: " << f.getGradeSign()
	  << ", grade to execute: " << f.getGradeExecute();
	return o;
}
