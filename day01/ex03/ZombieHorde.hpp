#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	public:
			ZombieHorde(int n_);
			~ZombieHorde();
			
			void announce(void);

	private:
			Zombie *horde;
			int n;
};

#endif
