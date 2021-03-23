#include "convertor.hpp"

Convertor::Convertor(std::string str): _str(str) {
	Convertor::convert();
}

Convertor::Convertor(const Convertor &copy): _str(copy._str), _c(copy._c), _i(copy._i), _f(copy._f), _d(copy._d) {
	for (int i = 0; i < 4; i++)
		_flag[i] = copy._flag[i];
}

Convertor::~Convertor() {
}

void		Convertor::setFlag(int i, std::string flag) {
	_flag[i] = flag;
}

int		Convertor::isChar(std::string str) const {
	if (str.length() != 1 || std::isdigit(str[0]))
		return (0);
	return (1);
}

int		Convertor::isInt(std::string str) const {
	size_t i = 0;

	if (str[0] == '+' || str[0] == '-')
		i = 1;
	while(i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		Convertor::isFloat(std::string str) const {
	size_t	i = 0;
	int	n = 0;

	if (str[0] == '+' || str[0] == '-')
		i = 1;
	if (str[str.length() - 1] != 'f')
		return (0);
	while(i < str.length() - 1)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				n++;
			else
				return (0);
		}
		i++;
	}
	if (n != 1)
		return (0);
	return (1);
}

int		Convertor::isDouble(std::string str) const {
	size_t	i = 0;
	int	n = 0;

	if (str[0] == '+' || str[0] == '-')
		i = 1;
	while(i < str.length())
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				n++;
			else
				return (0);
		}
		i++;
	}
	if (n != 1)
		return (0);
	return (1);
}

int		Convertor::isDot() const
{
	if (Convertor::isChar(_str))
		return (1);
	if (Convertor::isInt(_str))
		return (1);
	if (Convertor::isFloat(_str))
	{
		if (!std::isnan(_f) && !std::isinf(_f))
			return (1);
	}
	if (Convertor::isDouble(_str))
	{
		if (!std::isnan(_d) && !std::isinf(_d))
			return (1);
	}
	return (0);
}

void		Convertor::convert_c()
{
	_c = _str[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
}

void		Convertor::convert_i()
{
	long int tmp;
	tmp = std::atol(_str.c_str());
	if (tmp > std::numeric_limits<int>::max() || tmp < std::numeric_limits<int>::min())
	{
		for (int i = 0; i < 4; i++)
			Convertor::setFlag(i, "impossible");
		return ;
	}
	_i = std::atoi(_str.c_str());
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);
}

void		Convertor::convert_f()
{
	_f = std::atof(_str.c_str());
	_c = static_cast<char>(_f);
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);
}

void		Convertor::convert_d()
{
	_d = std::atof(_str.c_str());
	_c = static_cast<char>(_d);
	_i = static_cast<int>(_d);
	_f = static_cast<double>(_d);
}

void		Convertor::convert()
{
	if (Convertor::isChar(_str))
		convert_c();
	else
	{
		if (Convertor::isInt(_str))
			convert_i();
		else if (Convertor::isFloat(_str) || _str == "+inff" || _str == "-inff" || _str == "nanf")
			convert_f();
		else if (Convertor::isDouble(_str) || _str == "+inf" || _str == "-inf" || _str == "nan")
			convert_d();
		else
		{
			for (int i = 0; i < 4; i++)
				Convertor::setFlag(i, "impossible");
			return ;
		}
		if ((_i >= 0 && _i < 32) || _i == 127)
			Convertor::setFlag(0, "non displayable");
		else if (_i < 0 || _i > 127)
			Convertor::setFlag(0, "impossible");
		if (_d > std::numeric_limits<int>::max() || _d < std::numeric_limits<int>::min()
				|| _str == "nan" || _str == "nanf")
		{
			Convertor::setFlag(0, "impossible");
			Convertor::setFlag(1, "impossible");
		}
	}
}

std::string	Convertor::getFlag(int i) const {
	return(_flag[i]);
}

char		Convertor::getChar() const {
	return(_c);
}

int		Convertor::getInt() const {
	return(_i);
}

float		Convertor::getFloat() const {
	return(_f);
}

double		Convertor::getDouble() const {
	return(_d);
}

std::ostream	& operator<<(std::ostream &os, const Convertor & rhs)
{
	os << "char: ";
	if (rhs.getFlag(0) != "")
		os << rhs.getFlag(0) << std::endl;
	else
		os << rhs.getChar() << std::endl;

	os << "int: ";
	if (rhs.getFlag(1) != "")
		os << rhs.getFlag(1) << std::endl;
	else
		os << rhs.getInt() << std::endl;

	std::stringstream	ss;
	std::string		str;

	os << "float: ";
	if (rhs.getFlag(2) != "")
		os << rhs.getFlag(2) << std::endl;
	else
	{
		ss << rhs.getFloat();
		str = ss.str();
		if (rhs.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		os << ss.str() << "f" << std::endl;
	}

	ss.str("");
	os << "double: ";
	if (rhs.getFlag(3) != "")
		os << rhs.getFlag(3) << std::endl;
	else
	{
		ss << rhs.getDouble();
		str = ss.str();
		if (rhs.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		os << ss.str() << std::endl;
	}
	return (os);
}
