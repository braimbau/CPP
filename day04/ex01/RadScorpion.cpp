#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) {}

SuperMutant::SuperMutant(const SuperMutant & src) : Enemy(src.getHP(), src.getType()) {}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	if (this->getHP() == 0)
		std::cout << "Aaargh..." << std::endl;
}

SuperMutant &	SuperMutant::operator=(const SuperMutant & rhs)
{
	*this = rhs;
	return (*this);
}
