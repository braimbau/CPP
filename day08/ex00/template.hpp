#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <algorithm>

template <class T>
typename T::iterator easyfind(T & t, int i)
{
	typename T::iterator r = std::find(t.begin(), t.end(), i);
	return (r);
}
#endif
