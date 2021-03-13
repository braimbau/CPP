#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		virtual	~Bureaucrat();

		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);

		Bureaucrat &	operator=(const Bureaucrat & rhs);

		struct GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("Grade two high");
			}
		};

		struct GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("Grade two low");
			}
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif
