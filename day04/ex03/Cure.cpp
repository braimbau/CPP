#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::~Cure(void) {} 

Cure *Cure::clone() const
{
	return new Cure();
}

Cure & Cure::operator=(const Cure & rhs) {
	this->AMateria::operator=(rhs);
	return *this;
}

void Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
