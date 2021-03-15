#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src)
{
	(*(this) = src);
}

void PresidentialPardonForm::subExecute(Bureaucrat const & executor) const
{
	std::cout << _target << " have been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm	&	PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	return (*(this));
}


