#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & src);
		virtual	~Intern();

		AForm *makeForm(std::string type, std::string target);

		struct unknowtypeexception : public std::exception
		{
			virtual const char *what() const throw()
			{
				return("unknow type");
			}
		};

		Intern &	operator=(const Intern & rhs);
	private:
};

#endif
