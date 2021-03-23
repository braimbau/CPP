#ifndef CONVERTOR
# define CONVERTOR

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <sstream>

class Convertor
{
	public:
		
		Convertor();
		Convertor(std::string str);
		Convertor(const Convertor & src);
		~Convertor();

		void		setFlag(int i, std::string flag);
		std::string	getFlag(int i) const;
		char		getChar() const;
		int		getInt() const;
		float		getFloat() const;
		double		getDouble() const;

		void		convert();
		void		convert_c();
		void		convert_i();
		void		convert_d();
		void		convert_f();

		int		isChar(std::string str) const;
		int		isInt(std::string str) const;
		int		isFloat(std::string str) const;
		int		isDouble(std::string str) const;
		int		isDot() const;

		Convertor		& operator=(const Convertor & rhs);

	private:

		std::string		_str;
		char			_c;
		int			_i;
		float			_f;
		double			_d;
		std::string		_flag[4];


};

std::ostream	& operator<<(std::ostream & os, const Convertor & conv);

#endif
