#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <string>
#include <iostream>

class PowerFist : public AWeapon
{
	public:
			PowerFist(void);
			PowerFist(const PowerFist & src);
			virtual	~PowerFist();

			void attack(void) const;

			PowerFist &	operator=(const PowerFist & rhs);
	private:
};

#endif
