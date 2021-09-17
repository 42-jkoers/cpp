#pragma once
#include <cstdlib>
#include <iostream>

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
	const static long grade_min = 1;
	const static long grade_max = 150;
	void			  setGrade(long grade);
	const std::string name;
	long			  grade;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& target);
