#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {}

PlasmaRifle &	PlasmaRifle::operator=(const PlasmaRifle & rhs)
{
	*this = rhs;
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "*piouuu piouuu piouuu*" << std::endl;
}
