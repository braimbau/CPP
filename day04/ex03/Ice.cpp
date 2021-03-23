#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) {} 

Ice *Ice::clone() const
{
	return new Ice();
}

Ice & Ice::operator=(const Ice & rhs) {
	this->AMateria::operator=(rhs);
	return *this;
}

void Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
