#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name) {};

HumanB::~HumanB(){};

void HumanB::attack(void) const
{
	std::cout << this->name << " attack with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
