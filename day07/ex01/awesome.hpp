#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome {

	public:

		Awesome( int n ) : _n( n ) {}

		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

		int getValue(void) const {return _n;}

	private:

		int _n;
};

std::ostream & operator<<(std::ostream &os, const Awesome & rhs)
{
	os << rhs.getValue();
	return(os);
}

#endif
