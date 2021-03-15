#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
{
	(*(this) = src);
}

void RobotomyRequestForm::subExecute(Bureaucrat const & executor) const
{
	std::cout << "***brrrrrrrrrr***" << std::endl;
	std::cout << _target << " have been robotomized" << std::endl;
}

RobotomyRequestForm	&	RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	return (*(this));
}


