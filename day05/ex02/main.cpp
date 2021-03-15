#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{

	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 149);

	ShrubberyCreationForm	A150("maison");
	ShrubberyCreationForm	A250("jardin");
	RobotomyRequestForm		B742("boby");
	PresidentialPardonForm	C456("boby");
	std::cout << boby << julie;
	std::cerr << A150;
	try
	{
		boby.signForm(A150);
		std::cout << A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.signForm(A150);
		std::cout << A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	julie.signForm(A150);
	try
	{
		A150.execute(boby);
		std::cout << A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.executeForm(A250);
		std::cout << A250;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.executeForm(A150);
		std::cout << A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	julie.signForm(B742);
	julie.executeForm(B742);
	julie.signForm(C456);
	julie.executeForm(C456);
	return (0);
}
