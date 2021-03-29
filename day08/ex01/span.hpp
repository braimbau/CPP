#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>

class span
{
	public:
		span(void);
		span(unsigned int n) : _n(n), _vec(n), _i(0) {};
		span(const span & src);

		virtual	~span() {};

		span &	operator=(const span & rhs);
		void addNumber(int v);
		void addNumber(std::vector<int>::iterator f, std::vector<int>::iterator l);
		int	longestSpan(void);
		int shortestSpan(void);
//	private:
		unsigned int _n;
		std::vector<int> _vec;
		unsigned int _i;
};

#endif
