#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon & src) : Victim(src){}

Peon & Peon::operator=(const Peon & rhs)
{
	this->_Name = rhs._Name;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a pink pony!" << std::endl;
}

