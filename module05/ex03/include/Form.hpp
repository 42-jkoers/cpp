#pragma once
#include <iostream>

class Bureaucrat;

class Form {
  public:
	Form();
	Form(std::string name, long gradeSign, long gradeExecute, std::string target);
	Form(const Form& src);
	virtual ~Form();
	Form&		 operator=(Form const& cp);

	void		 beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(const Bureaucrat& executor) const = 0;

	// getters and setters
	std::string getName() const;
	long		getGradeSign() const;
	long		getGradeExecute() const;
	bool		getIsSigned() const;
	std::string getTarget() const;

	void		setIsSigned(bool isSigned);
	void		setTarget(const std::string& target);
	//

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

	class FormExecuteException : public std::exception {
	  public:
		FormExecuteException(std::string error);
		~FormExecuteException() throw() {}
		const char* what() const throw();

	  private:
		FormExecuteException();
		std::string m_error;
	};

  protected:
	void validateExecution(const Bureaucrat& executor) const;

  private:
	const std::string name;
	bool			  isSigned;
	const long		  gradeSign;
	const long		  gradeExecute;
	std::string		  target;
};

std::ostream& operator<<(std::ostream& o, const Form& i);
