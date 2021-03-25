#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array():
	_array(NULL), _size(0)
{
}

	template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>::Array(unsigned int n):
	_array(new T[n]()), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array &c):
	_array(NULL), _size(c._size)
{
	if (c._size)
	{
		_array = new T[c._size];
		for (unsigned int i = 0; i < c._size; i++)
			_array[i] = c._array[i];
	}
}

	template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &c)
{
	delete[] _array;
	_array = NULL;
	if (c._size)
	{
		_array = new T[c._size];
		for (unsigned int i = 0; i < c._size; i++)
			_array[i] = c._array[i];
	}
	_size = c._size;
	return *this;
}

	template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (!_array || i >= _size)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (!_array || i >= _size)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

	template <typename T>
char const *Array<T>::OutOfBoundException::what() const throw()
{
	return "Index supplied was out of bound!";
}

#endif
