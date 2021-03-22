#ifndef NUMBER_HPP
# define NUMBER_HPP

#include <iostream>
#include <cstdio>

class Number
{
	public:
		Number(void);
		Number(std::string);
		Number(const Number & src);
		virtual	~Number();

		Number &	operator=(const Number & rhs);

		void printChar(void);
		void printInt(void);
		void printFloat(void);

	private:
		int		_i;
		float	_f;
		char	_c;
		double	_d;
};

#endif
