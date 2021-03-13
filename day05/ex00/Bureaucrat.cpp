#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
	{
		grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	if (grade < 1)
	{
		grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src._name) 
{
	*this = src;
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::decreaseGrade(void)
{
	_grade++;
	if (_grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::increaseGrade(void)
{
	_grade--;
	if (_grade < 1)
	{
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
	_grade = rhs.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs)
{
	os << "Le bureactrat : "<< rhs.getName() << " possede le grade " << rhs.getGrade() << " gneugneugneugneu!" << std::endl;
	return (os);
}
