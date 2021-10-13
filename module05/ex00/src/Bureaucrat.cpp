#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("no name"), grade(grade_min) {
}

void Bureaucrat::setGrade(long grade) {
	if (grade < grade_min)
		throw GradeTooHighException();
	else if (grade > grade_max)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const std::string& name, long grade) : name(name) {
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp) {
	*this = cp;
}

// what the fuck
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& cp) {
	this->grade = cp.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {
	return name;
}

long Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incrementGrade() {
	setGrade(grade - 1);
}

void Bureaucrat::decrementGrade() {
	setGrade(grade + 1);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& target) {
	out << "name: " << target.getName() << ", grade: " << target.getGrade();
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "grade too low";
}
