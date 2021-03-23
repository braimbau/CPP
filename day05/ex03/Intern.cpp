#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern & src)
{
	*this = src;
}

Intern::~Intern() {}

AForm * Intern::makeForm(std::string type, std::string target)
{
	ShrubberyCreationForm *F1 = new ShrubberyCreationForm(target);
	PresidentialPardonForm *F2 = new PresidentialPardonForm(target);
	RobotomyRequestForm *F3 = new RobotomyRequestForm(target);
	AForm *tab[3] = {F1, F2, F3};
	AForm *ret = NULL;
	
	for (int i = 0; i < 3; i++)
	{
		if (type == tab[i]->getName())
		{
			ret = tab[i];
			std::cout << "Intern creates " << ret->getName();
		}
		else
			delete tab[i];
	}
	if (ret == NULL)
		throw Intern::unknowtypeexception();
	return (ret);
}

Intern &	Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return (*this);
}
