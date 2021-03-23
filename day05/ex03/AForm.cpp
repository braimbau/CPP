#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _execGrade(execGrade), _signGrade(signGrade), _isSigned(false)
{
	if (signGrade > 150)
	{
		signGrade = 150;
		throw AForm::GradeTooLowException();
	}
	if (signGrade < 1)
	{
		signGrade = 1;
		throw AForm::GradeTooHighException();
	}
	if (execGrade > 150)
	{
		execGrade = 150;
		throw AForm::GradeTooLowException();
	}
	if (execGrade < 1)
	{
		execGrade = 1;
		throw AForm::GradeTooHighException();
	}
}

AForm::AForm() : _execGrade(1), _signGrade(1) {}

AForm::~AForm() {}

AForm::AForm(const AForm & rhs) : _name(rhs._name), _execGrade(rhs._execGrade), _signGrade(rhs._signGrade)
{
	(*(this) = rhs);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (_isSigned == false)
		throw AForm::FormUnsignedException();
	else if (_execGrade < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->subExecute(executor);
}

void AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (_signGrade < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	else
		_isSigned = true;
}

bool	AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::string AForm::getName() const
{
	return(_name);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExecGrade() const
{
	return (_execGrade);
}

AForm	&	AForm::operator=(const AForm & rhs)
{
	_isSigned = rhs.getIsSigned();
	return (*(this));
}

std::ostream & operator<<(std::ostream & os, const AForm & rhs) {
	if (rhs.getIsSigned	() == true)
		os << "Form " << rhs.getName() << " is signed. Grade required: " << rhs.getSignGrade()
			<< " to sign and " << rhs.getExecGrade()  << " to execute" << std::endl;
	else
		os << "Form " << rhs.getName() << " is unsigned. Grade required: " << rhs.getSignGrade()
			<<" to sign and " << rhs.getExecGrade() << " to execute" << std::endl;
	return os;
}
