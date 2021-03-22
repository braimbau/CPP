#include "Number.hpp"	

Number::Number(std::string str)
{
	if (str.length() == 1 && (str.at(0) < 47 || str.at(0) > 57))
	{
		_c = str.at(0);
		_d = _c;
	}
	else 
		_d = atof(str.c_str());
}

Number::~Number() {}

void Number::printChar()
{
	std::cout << "char: ";
	_c = static_cast<char>(_d);
	if (_d != _d || isinf(_d))
		std::cout << "Impossible";
	else if (_d < 0 || _d > 127)
		std::cout << "Impossible";
	else if (_d < 32 || _d > 126)
		std::cout << "Non displayble";
	else
		std::cout << _c;
	std::cout << std::endl;
}

void Number::printInt()
{
	std::cout << "int: ";
	_i = static_cast<int>(_d);
	if (_d < -2147483648 || _d > 2147483647)
		std::cout << "Impossible";
	else if (_d != _d || isinf(_d))
		std::cout << "Impossible";
	else
		std::cout << _i;
	std::cout << std::endl;
}

void Number::printFloat()
{
	_f = static_cast<int>(_d);
}
