#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
			Fixed(void);
			Fixed(const int);
			Fixed(const float);
			Fixed(const Fixed & src);
			~Fixed();

			Fixed &	operator=(const Fixed & rhs);
			std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

			int getRawBits(void) const;
			void setRawBits(int const raw);
			int	toInt(void) const;
			float toFloat(void) const;
	private:
			int fixed_value;
			const static int nb_bits;
};
#endif
