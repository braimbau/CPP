#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0), _type(NULL) {
}

AMateria::~AMateria(void) {
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) {}

AMateria::AMateria(const AMateria & src) {
	*this = src;
}

AMateria & AMateria::operator=(const AMateria & rhs) {
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType(void) const {
	return _type;
}

unsigned int AMateria::getXP(void) const {
	return _xp;
}

void AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}
