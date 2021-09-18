#pragma once
#include <iostream>

class Bureaucrat;

class Form {
  public:
	Form();
	Form(std::string name, long gradeSign, long gradeExecute);
	Form(Form const& src);
	~Form();
	Form&		operator=(Form const& rhs);

	std::string getName() const;
	long		getGradeSign() const;
	long		getGradeExecute() const;
	bool		isSigned() const;
	void		beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
	  public:
		GradeTooHighException();
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	  public:
		GradeTooLowException();
		const char* what() const throw();
	};

  private:
	const std::string name;
	bool			  is_signed;
	const long		  gradeSign;
	const long		  gradeExecute;
};

std::ostream& operator<<(std::ostream& o, const Form& i);
