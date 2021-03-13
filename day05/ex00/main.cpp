#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat corine = Bureaucrat("Corine", 150);
		std::cout << corine;
		corine.increaseGrade();
		std::cout << corine;
		corine.decreaseGrade();
		std::cout << corine;
		corine.decreaseGrade();
	}
	
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat didier = Bureaucrat("Didier", 1);
		std::cout << didier;
		didier.decreaseGrade();
		std::cout << didier;
		didier.increaseGrade();
		std::cout << didier;
		didier.increaseGrade();
	}
	
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat alain = Bureaucrat("Alain", 0);
		std::cout << alain;
	}
	
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat stephanie = Bureaucrat("Stephanie", 300);
		std::cout << stephanie;
	}
	
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;;
	}
}
