#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

struct invalidFormatException : public std::exception
{
	virtual const char *what() const throw()
	{
		return("Need a char, an int or a float");
	}
};
#endif
