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

Fixed::Fixed(const int intgr)
{
	if (intgr > 8388607)
		this->fixed_value = 8388607 << 8;
	else if (intgr < -8388608)
		this->fixed_value = -8388608 * 256;
	else
		this->fixed_value = intgr << 8;
}

Fixed::Fixed(const float fl)
{
	if (fl > 8388607)
		this->fixed_value = 8388607 << 8;
	else if (fl < -8388608)
		this->fixed_value = -8388608 * 256;
	else
		this->fixed_value = fl * 256;
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

int Fixed::toInt(void) const
{
	int i;

	i = this->fixed_value >> 8;
	return (i);
}

float Fixed::toFloat(void) const
{
	float f;

	f = (float) this->fixed_value / 256;
	return (f);
}

std::ostream& operator>>(std::ostream& os, const Fixed& fix)
{
	int i;

	i = fix.getRawBits() << 24;
	os << fix.toInt() << "." << i;
	return (os);
}

const int Fixed::nb_bits = 8;
