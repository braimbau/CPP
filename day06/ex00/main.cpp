#include "convertor.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: arguments" << std::endl;
		return 1;
	}
	Convertor conv(av[1]);
	std::cout << conv;

	return 0;
}
