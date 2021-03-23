#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {};

HumanA::~HumanA(){};

void HumanA::attack(void) const
{
	std::cout << this->name << " attack with his " << this->weapon.getType() << std::endl;
}
