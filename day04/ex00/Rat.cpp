#include "Rat.hpp"

Rat::Rat(std::string name) : Victim(name)
{
	std::cout << "*le bruit d'un rat*" << std::endl;
}

Rat::~Rat()
{
	std::cout << "*le bruit d'un rat qui decede de deces*" << std::endl;
}

Rat::Rat(const Rat & src) : Victim(src){}

Rat & Rat::operator=(const Rat & rhs)
{
	this->_Name = rhs._Name;
	return (*this);
}

void Rat::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into Petter Petigrow!" << std::endl;
}

