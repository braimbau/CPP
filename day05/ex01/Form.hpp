#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form & src);
		virtual	~Form();

		void beSigned(const Bureaucrat & bureaucrat);
		bool getIsSigned(void) const;
		std::string getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;

		struct GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("Grade too high");
			}
		};

		struct GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("Grade too low");
			}
		};

		Form &	operator=(const Form & rhs);

	private:
		const std::string	_name;
		const int			_execGrade;
		const int			_signGrade;
		bool				_isSigned;
};

std::ostream & operator<<(std::ostream & os, Form const & rhs);

#endif
