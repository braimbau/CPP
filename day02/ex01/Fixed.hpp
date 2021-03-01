#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>
#include <string>

class Fixed
{
	public:
			Fixed();
			Fixed(const int);
			Fixed(const float);
			Fixed(const Fixed & src);
			~Fixed();

			Fixed &	operator=(const Fixed & rhs);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			int		toInt(void) const;
			float	toFloat(void) const;
	private:
			int					_fixed_value;
			const static int	_nb_bits = 8;
};


			std::ostream& operator<<(std::ostream& os, const Fixed& rhs);
#endif
