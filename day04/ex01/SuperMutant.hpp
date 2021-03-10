#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
	public:
			SuperMutant(void);
			SuperMutant(const SuperMutant & src);
			virtual	~SuperMutant();

			void takeDamage(int);

			SuperMutant &	operator=(const SuperMutant & rhs);
};

#endif
