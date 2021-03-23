#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
{
	(*(this) = src);
}

void ShrubberyCreationForm::subExecute(Bureaucrat const & executor) const
{
	(void)executor;
	std::fstream ofs;
	ofs.open(_target, std::ios::out);
	ofs << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      /\\/ \\\\" << std::endl;
}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	(void)rhs;
	return (*(this));
}


