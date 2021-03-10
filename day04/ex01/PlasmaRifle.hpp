#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <string>
#include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle(void);
			PlasmaRifle(const PlasmaRifle & src);
			virtual	~PlasmaRifle();

			void attack(void) const;

			PlasmaRifle &	operator=(const PlasmaRifle & rhs);
	private:
};

#endif
