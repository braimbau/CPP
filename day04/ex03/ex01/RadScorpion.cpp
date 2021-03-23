#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(170, "Rad Scoprion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & src) : Enemy(src.getHP(), src.getType()) {}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}

RadScorpion &	RadScorpion::operator=(const RadScorpion & rhs)
{
	*this = rhs;
	return (*this);
}
