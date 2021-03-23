#ifndef FIRE_HPP
# define FIRE_HPP

#include "AMateria.hpp"
#include <iostream>

class Fire : public AMateria
{
	public:

		Fire();
		Fire(const Fire & src);
		virtual	~Fire();
		Fire &	operator=(const Fire & rhs);

		Fire* clone() const;
		void use(ICharacter& target);

	private:
};

#endif
