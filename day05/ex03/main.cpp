#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{

	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 149);
	Intern	   louis;

	AForm *A150 = louis.makeForm("ShrubberyCreationForm", "maison");
	AForm *A250 = louis.makeForm("ShrubberyCreationForm", "jardin");
	AForm *B742 = louis.makeForm("RobotomyRequestForm", "boby");
	AForm *C456 = louis.makeForm("PresidentialPardonForm", "boby");
	std::cout << boby << julie;
	std::cerr << *A150;
	try
	{
		boby.signForm(*A150);
		std::cout << *A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.signForm(*A150);
		std::cout << *A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	julie.signForm(*A150);
	try
	{
		A150->execute(boby);
		std::cout << *A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.executeForm(*A250);
		std::cout << *A250;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		julie.executeForm(*A150);
		std::cout << *A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	julie.signForm(*B742);
	julie.executeForm(*B742);
	julie.signForm(*C456);
	julie.executeForm(*C456);
	return (0);
}
