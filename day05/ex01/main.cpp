#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{

	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 150);

	Form A150("A150", 150, 150);
	Form B149("B149", 149, 149);
	Form Z111("B149", 150, 149);
	std::cout << boby << julie;
	std::cerr << A150;

	std::cout << "===================" << std::endl;

	try
	{
		boby.signForm(A150);
		std::cout << A150;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "===================" << std::endl;
	
	try
	{
		boby.signForm(B149);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "===================" << std::endl;
	
	std::cerr << B149;
	try
	{
		Form C1313("C1313", 1, 0);
		std::cout << C1313;
		boby.signForm(C1313);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===================" << std::endl;
	
	try
	{
		Form C1121("C1121", 1, 151);
		std::cout << C1121;
		boby.signForm(C1121);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
