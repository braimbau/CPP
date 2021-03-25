#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
void swap(T & a, T & b)
{
	T t(a);
	a = b;
	b = t;
}

template <typename T>
const T & min(T & a, T & b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T & max(T & a, T & b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
