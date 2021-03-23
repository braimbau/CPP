#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:

		Ice();
		Ice(const Ice & src);
		virtual	~Ice();
		Ice &	operator=(const Ice & rhs);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
