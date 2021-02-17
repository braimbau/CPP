#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
			Fixed(void);
			Fixed(const Fixed & src);
			~Fixed();

			Fixed &	operator=(const Fixed & rhs);

			int getRawBits(void) const;
			void setRawBits(int const raw);
	private:
			int fixed_value;
			const static int nb_bits;
};
#endif
