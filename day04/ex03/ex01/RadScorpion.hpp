#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
	public:
			RadScorpion(void);
			RadScorpion(const RadScorpion & src);
			virtual	~RadScorpion();

			void takeDamage(int);

			RadScorpion &	operator=(const RadScorpion & rhs);
};

#endif
