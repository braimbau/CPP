#include "Victim.hpp"

Victim::Victim(std::string name) : _Name(name) 
{
	std::cout << "Some random victim named " << this->_Name << " just appeared !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim named " << this->_Name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim & src)
{
	this->_Name = src._Name;
}

Victim & Victim::operator=(const Victim & rhs)
{
	this->_Name = rhs._Name;
	return (*this);
}

std::string Victim::getName(void) const
{
	return (this->_Name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Victim & rhs)
{
	os << "I'm " << rhs.getName() << ", and I like otters!";
	return (os);
}
