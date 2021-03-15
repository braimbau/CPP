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

		Intern &	operator=(const Intern & rhs);
	private:
};

#endif
