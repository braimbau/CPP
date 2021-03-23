#include "Character.hpp"

Character::Character(std::string const & name) : _Name(name), _AP(40),_Weapon(NULL) {}

Character::~Character(void)
{
	std::cout << "Aaargh..." << std::endl;
}

Character::Character(const Character & src)
{
	this->_Name = src.getName();
	this->_AP = src.getAP();
	this->_Weapon = src.getWeapon();
}

void Character::recoverAP(void)
{
	if (this->_AP < 40)
	{
		this->_AP += 10;
		if (this->_AP > 40)
			this->_AP = 40;
	}
}

void Character::equip(AWeapon *weapon)
{
	this->_Weapon = weapon;
}

void Character::attack(Enemy *target)
{
	if (this->_Weapon == NULL)
	{
		std::cout << "Character doesn't have weapon" << std::endl;
		return;
	}
	if (this->_AP < this->_Weapon->getAPCost())
	{
		std::cout << "Character doesn't have enough AP " << std::endl;
		return;
	}
	std::cout << this->_Name << " attacks " <<  target->getType() << " with " << this->getWeapon()->getName() <<  std::endl;
	this->_Weapon->attack();
	this->_AP -= this->_Weapon->getAPCost();
	target->takeDamage(this->_Weapon->getDamage());
	if (target->getHP() == 0)
		delete target;
}

std::string Character::getName(void) const
{
	return (this->_Name);
}

int Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon * Character::getWeapon(void) const
{
	return (this->_Weapon);
}

Character &	Character::operator=(const Character & rhs)
{
	*this = rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Character & rhs)
{
	if (rhs.getWeapon() != NULL)
		os << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName();
	else
		os << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed";
	return (os);
}
