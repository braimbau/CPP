#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		virtual	~Bureaucrat();

		void signForm(AForm & form) const;
		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);
		void executeForm(AForm const & form) const;

		Bureaucrat &	operator=(const Bureaucrat & rhs);

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

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif
