#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _Name(name), _Title(title)
{
	std::cout << this->_Name << ", " << this->_Title << " is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_Name << ", " << this->_Title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
	this->_Name = src._Name;
	this->_Title = src._Title;
}

Sorcerer & Sorcerer::operator=(const Sorcerer & rhs)
{
	this->_Name = rhs._Name;
	this->_Title = rhs._Title;
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (this->_Name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_Title);
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & os, const Sorcerer & rhs)
{
	os << "I am " << rhs.getName() << ", " <<  rhs.getTitle() << ", and I like ponies!";
	return (os);
}
