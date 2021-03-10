#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {}

PowerFist &	PowerFist::operator=(const PowerFist & rhs)
{
	*this = rhs;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
