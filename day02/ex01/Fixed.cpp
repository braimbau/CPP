#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int n) {
	this->_fixed_value = n << this->_nb_bits;
}

Fixed::Fixed(const float f) {
	this->_fixed_value = roundf(f * ( 1 << this->_nb_bits));
}

float	Fixed::toFloat(void) const{
	return (((float)(this->_fixed_value) /  ( 1 << this->_nb_bits) ) );
}

int		Fixed::toInt(void) const {
	
	return ((int)this->_fixed_value >> this->_nb_bits);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_value = raw;
}

std::ostream & operator<<( std::ostream & o , Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
