#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _Name(name), _APCost(apcost), _Damage(damage) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon & src)
{
	this->_Name = src.getName();
	this->_APCost = src.getAPCost();
	this->_Damage = src.getDamage();
}

const std::string AWeapon::getName(void) const
{
	return (this->_Name);
}

int AWeapon::getAPCost(void) const
{
	return (this->_APCost);
}

int AWeapon::getDamage(void) const
{
	return (this->_Damage);
}

AWeapon &	AWeapon::operator=(const AWeapon & rhs)
{
	*this = rhs;
	return (*this);
}
