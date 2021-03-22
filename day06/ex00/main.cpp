#include <iostream>
#include <cstdlib>
#include "exception.hpp"
#include "Number.hpp"

double conv_double(std::string str)
{
	double ret;
	if (str.length() == 1 && (str[0] < 48 || str[0] > 57))
	{
		return (std::atof(str.c_str()));
	}
	if (str == "nan" || str == "nan" || str == "+inf" || str == "-inf" || str == "inf")
		ret = NAN;	
	if (*(str.end() - 1) == 'f')
	{
		*(str.end() - 1) = 0; std::cout << "salut " << std::endl;
	}
	ret = std::atof(str.c_str());
	std::cout << ret << "|" << std::to_string(ret) << std::endl;
//	if (std::to_string(ret).length() != str.length())
//		throw (invalidFormatException());
	return ret;
}

int main(int ac, char **ag)
{
	//double conv;
	if (ac != 2)
	{
		std::cout << "Bro t debile met un argument wsh" << std::endl;
		return (1);
	}
	std::string str = ag[1];
	Number n = Number(str);
	n.printChar();
	n.printInt();
	n.printFloat();
/*	try
	{
		conv = conv_double(str);
	}
	catch(invalidFormatException & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	if (conv < 
	if (conv < 33 || conv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
	{
		char c = conv;
		std::cout << "char: " << c << std::endl;
	}
	if (conv > 2147483647 || conv < -2147483648)
		std::cout << "int: Impossible" << std::endl;
	else
	{
		int i = conv;
		std::cout << "int: " << i << std::endl;
	}*/
}
