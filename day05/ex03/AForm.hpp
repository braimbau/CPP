#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm & src);
		virtual	~AForm();

		void beSigned(const Bureaucrat & bureaucrat);
		bool getIsSigned(void) const;
		std::string getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		void execute(Bureaucrat const & executor) const;
		virtual void subExecute(Bureaucrat const & executor) const = 0;

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

		struct FormUnsignedException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("form unsigned");
			}
		};

		AForm &	operator=(const AForm & rhs);

	private:
		const std::string	_name;
		int					_execGrade;
		int					_signGrade;
		bool				_isSigned;
};

std::ostream & operator<<(std::ostream & os, AForm const & rhs);

#endif
