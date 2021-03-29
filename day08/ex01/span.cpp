#include "span.hpp"

void span::addNumber(int v)
{
	if (_i == _n)
		throw std::runtime_error("tro loin");
	else
	{
		_vec[_i] = v;
		_i++;
	}
}

void span::addNumber(std::vector<int>::iterator f, std::vector<int>::iterator l)
{
	while (f != l)
	{
		addNumber(*f);
		f++;
	}
}
	
int span::longestSpan(void) {
	if (_i < 2)
		throw std::runtime_error("bro...");
	return(*(std::max_element(_vec.begin(), _vec.end())) - *(std::min_element(_vec.begin(), _vec.end())));
}

int span::shortestSpan(void) {
	int min = longestSpan();
	std::sort(_vec.begin(), _vec.end());
	for(unsigned int j = 0; j + 1 < _i; j++)
		min = std::min(min, _vec[j + 1] - _vec[j]);
	return min;
}
