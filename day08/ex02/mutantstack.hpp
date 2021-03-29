#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <deque>
#include <stack>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator  begin() { return std::stack<T>::c.begin(); }
	iterator  end() { return std::stack<T>::c.end(); }

	iterator  begin() const { return std::stack<T>::c.begin(); }
	iterator  end() const { return std::stack<T>::c.end(); }
};

#endif
