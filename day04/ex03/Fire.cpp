#include "Fire.hpp"

Fire::Fire(void) : AMateria("fire") {
}

Fire::~Fire(void) {
} 

Fire *Fire::clone() const {
	return new Fire();
}

Fire & Fire::operator=(const Fire & rhs) {
	this->AMateria::operator=(rhs);
	return *this;
}

void Fire::use(ICharacter & target) {
	AMateria::use(target);
	std::cout << "* burns " << target.getName() << " to death, but he's kind of okay *" << std::endl;
}
