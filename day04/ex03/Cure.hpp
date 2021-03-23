#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:

		Cure();
		Cure(const Cure & src);
		virtual	~Cure();
		Cure &	operator=(const Cure & rhs);

		Cure* clone() const;
		void use(ICharacter& target);

	private:
};

#endif
