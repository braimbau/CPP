#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : fixed_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;	
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "member fn getRawBits called" << std::endl;
	return (this->fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "member fn setRawbit called" << std::endl;
	this->fixed_value = raw;
}
