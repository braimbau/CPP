#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <string>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array<T> &c);
		Array<T> &operator=(const Array<T> &c);

		class OutOfBoundException: public std::exception
	{
		public:
			virtual char const *what() const throw();
	};

		T &operator[](unsigned int i);
		T const &operator[](unsigned int i) const;
		unsigned int size() const;
};

#endif
