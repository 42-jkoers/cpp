#pragma once
#include "Form.hpp"
#include <cstdlib>
#include <iostream>

#define GRADE_MIN 1
#define GRADE_MAX 150

class Form;

class Bureaucrat {
  public:
	Bureaucrat();
	Bureaucrat(const std::string& name, long grade);
	Bureaucrat(const Bureaucrat& cp);
	Bureaucrat& operator=(const Bureaucrat& cp);
	~Bureaucrat();

	std::string getName() const;
	long		getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form& f) const;

	class GradeTooHighException : public std::exception {
	  public:
		GradeTooHighException();
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	  public:
		GradeTooLowException();
		virtual const char* what() const throw();
	};

  private:
	const static long grade_min = GRADE_MIN;
	const static long grade_max = GRADE_MAX;
	void			  setGrade(long grade);
	const std::string name;
	long			  grade;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& target);
