#include "span.hpp"

int main()
{
	srand (time(NULL));
	span sp(1000);

	try
	{
		sp.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	int myints[] = {2021 , 1492 , 1240};
	std::vector<int> lst (myints, myints + sizeof(myints) / sizeof(int));

	for (int i = 0; i < 997; i++)
		sp.addNumber(rand() % 100000000);

	sp.addNumber(lst.begin(), lst.end());

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;

	try
	{
		sp.addNumber(-42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
