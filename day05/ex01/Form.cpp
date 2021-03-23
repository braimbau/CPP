#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _execGrade(execGrade), _signGrade(signGrade), _isSigned(false)
{
	if (signGrade > 150)
	{
		signGrade = 150;
		throw Form::GradeTooLowException();
	}
	if (signGrade < 1)
	{
		signGrade = 1;
		throw Form::GradeTooHighException();
	}
	if (execGrade > 150)
	{
		execGrade = 150;
		throw Form::GradeTooLowException();
	}
	if (execGrade < 1)
	{
		execGrade = 1;
		throw Form::GradeTooHighException();
	}}

Form::~Form() {}

Form::Form(const Form & rhs) : _name(rhs._name),_execGrade(rhs._execGrade), _signGrade(rhs._signGrade) 
{
	(*(this) = rhs);
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (_signGrade > bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

bool	Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::string Form::getName() const
{
	return(_name);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExecGrade() const
{
	return (_execGrade);
}

Form	&	Form::operator=(const Form & rhs)
{
	_isSigned = rhs.getIsSigned();
	return (*(this));
}

std::ostream & operator<<(std::ostream & os, const Form & rhs) {
	if (rhs.getIsSigned	() == true)
		os << "Form " << rhs.getName() << " is signed. Grade required: " << rhs.getSignGrade()
			<< " to sign and " << rhs.getExecGrade()  << " to execute" << std::endl;
	else
		os << "Form " << rhs.getName() << " is unsigned. Grade required: " << rhs.getSignGrade()
			<<" to sign and " << rhs.getExecGrade() << " to execute" << std::endl;
	return os;
}
